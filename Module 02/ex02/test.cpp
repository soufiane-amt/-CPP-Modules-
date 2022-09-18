#include<iostream>
#include <cmath>
#include <stdio.h>

class printOut
{
    public:
    printOut& operator<<(std::string output)
    {
        printf("%s", output.c_str());
        return (*this);
    }
    printOut& operator<<(std::ostream nln)
    {
        printf("\n");
        return (*this);
    }
    // std::string    operator+(int n)
    // {
    //     // printf("%s", output.c_str());
    //     return (output.c_str());
    // }
};

int main()
{
    // std::string input;
    // float a;
    // float b;

    // a = 1.5f;
    // b = roundf(a);
    // std::cout << b << std::endl;
    // std::getline(std::cin, input);
    // printOut out;
    // out << "hello"<< " world" << "\n" ;
    // printOut::operator<<("hello").printOut::operator<<( "world");
    // operator<<(std::cout, "dfd");
    // std::cout << out.operator<<(out.operator<<("world")) << std::endl;
    // float a = 6 * (1 >> 1);
    // std::cout << a << std::endl;
    if (4 > 1)
        std::cout << "OK\n";
}