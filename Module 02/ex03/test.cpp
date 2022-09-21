#include <iostream>

struct Foo
{
    Foo(void)    { std::cout << "DC" << std::endl; }
    Foo(Foo const &)    { std::cout << "C" << std::endl; }
    Foo& operator=(const Foo &Foo)
    {
      std::cout << "=F" << std::endl;
      return (*this);
      }
    ~Foo(void)    { std::cout << "De" << std::endl; }
};

// Foo  foo(void)
// {
//   Foo  a;

//   return (a);
// }

#include <iostream>

int n = 0;

struct C {
  explicit C(int) {}
  C(const C&) { ++n; }  // the copy constructor has a visible side effect
};                      // it modifies an object with static storage duration

int main() {
  C c1(42);      // direct-initialization, calls C::C(int)
  C c2 = C(42);  // copy-initialization, calls C::C(const C&)

  // std::cout << n << std::endl;  // prints 0 if the copy was elided, 1 otherwise
  out<<"hello";
}
