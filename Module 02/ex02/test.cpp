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

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}