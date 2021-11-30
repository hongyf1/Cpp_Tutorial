#include <iostream>
using namespace std;
class A {
 public:
  int x;
  A() {
    cout << "default" << endl;
    x = -1;
  }
  A(int x) {
    cout << "parameters" << endl;
    this->x = x;
  }
  A(const A& a) {
    x = a.x;
    cout << "copy" << endl;
  }
};

int main() {
  A a;
  A b(3);
  A c(b);
  A* d = new A(10);
  cout << a.x << endl;
  cout << b.x << endl;
  cout << c.x << endl;
  cout << d->x << endl;
  return 0;
}
