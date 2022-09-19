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
    int b = 1;
    int &aa = a;
    int &bb = b;
    int &aaa = aa;
    int &bba = bb;

    std::cout << aaa << bba << std::endl;
    // if (&a == &a)
    //     std::cout << "OK" << std::endl;
}