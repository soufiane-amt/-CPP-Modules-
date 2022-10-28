#include <iostream>

class A
{
    public:
    virtual void func(){std::cout << "hello\n";}
};

class B: public A
{
    public:
    void func(){std::cout << "world\n";}
};


int main ()
{
    A *obj = new B;
    obj->func();
}