/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:24 by samajat           #+#    #+#             */
/*   Updated: 2022/11/04 21:06:32 by samajat          ###   ########.fr       */
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

class B : public Base
{   
public:
    int a;
};

// class C : public Base
// {
// public:
//     int a;
// };

int main(int argc,char* argv[])
{
    // int a = 4545455;
    // uintptr_t ptr = reinterpret_cast<uintptr_t>(&a);
    // std::cout << ptr << std::endl;
    // std::cout << &a << std::endl;
    // A *base = static_cast<A *>(new Base);
    // int nb = 5;
    // // int *a = &nb;
    // int *u = reinterpret_cast<int*>(nb);
    // std::cout << *u << std::endl;
    // int a = 5;
    // int *ptr = (int *)(a);
    // std::cout << *ptr;
    int a = 5;
    float b = reinterpret_cast<float>(a);
}
