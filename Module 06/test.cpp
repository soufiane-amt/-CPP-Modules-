/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:24 by samajat           #+#    #+#             */
/*   Updated: 2022/11/05 16:41:20 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


// class Base
// {
//   public: virtual ~Base() {}

//   bool isA() {
//     return (dynamic_cast<Base*>(this) != NULL);
//   }
// };

// class D1 {};
// class D2: public Base {};
// class D22: public D2 {};
class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base constructor called\n";
    }
    int a;
};

class A : public Base
{
public:    
    A()
    {
        std::cout << "A constructor called\n";
    }

    int a;
};

// class B : public Base
// {   
// public:
//     int a;
// };

// class C : public Base
// {
// public:
//     int a;
// };

int main(int argc,char* argv[])
{
    // int var = 45;
    // int *a = &var;
    // // // char *c;
    // // std::cout << a << std::endl;
    // // ptr = dynamic_cast<Base*>(ptv);
    // void *c = static_cast<void *>(a);
    // // std::cout << a << std::endl;
    // std::cout << c << std::endl;
    try
    {
        long a = 4444545555545454;
        int d = a;
        std::cout << d;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
