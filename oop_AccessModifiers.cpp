#include <iostream>
using namespace std;
class A {
 public:
  int x;

 private:
  int y;

 protected:
  int z;
  A() {
    x = 1;
    y = 1;
    z = 1;
  }
};

class B : public A {
 public:
  void func() {
    cout << "x = " << x << endl;
    // cout << "y = " << y << endl;  note:declared private here
    cout << "z = " << z << endl;
  }
};
class C : private A {
 public:
  void func() {
    cout << "x = " << x << endl;
    // cout << "y = " << y << endl;  note:declared private here
    cout << "z = " << z << endl;
  }
};
int main() {
  B b;
  b.func();
  cout << b.x << endl;
  // cout << b.z << endl; note: declared protected here
  C c;
  // cout << c.x << endl; note: declared here

  return 0;
}