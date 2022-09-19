#include<iostream>
#include <cmath>
#include <stdio.h>

class printOut
{
    public:
    printOut& operator=(std::string output)
    {
        printf("%s", output.c_str());
        return (*this);
    }
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
    int a = 5;
    int b = 0;

    a = a / b;
    // if (&a == &a)
    //     std::cout << "OK" << std::endl;
}