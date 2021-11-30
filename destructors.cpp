// destructors

#include <iostream>
using namespace std;
class A {
 public:
  int x;
  A(int x) { this->x = x; }
  ~A() { cout << "No." << x << " destructos" << endl; }
};

int main() {
  A a(100);
  for (int i = 0; i < 5; i++) {
    A b(i);
  }
  return 0;
}
