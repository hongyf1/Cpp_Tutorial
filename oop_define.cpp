#include <iostream>
class A {
 public:
  int x;
  void func() { std::cout << "hello " << x << std::endl; }
};

int main() {
  A a;
  a.x = 10;
  a.func();
  return 0;
}