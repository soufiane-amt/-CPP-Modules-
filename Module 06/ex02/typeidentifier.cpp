/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeidentifier.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:38:14 by samajat           #+#    #+#             */
/*   Updated: 2022/10/12 14:58:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typeidentifier.hpp"

Base    *generate(void)
{
    int index;
    Base *base;
    
    srand(time(NULL));
    index = rand() % 3;
    switch (index)
    {
    case 0:
        base = new A();
        std::cout << "-->A\n";
        break;
    
    case 1:
        base = new B();
        std::cout << "-->B\n";
        break;
    
    case 2:
        base = new C();
        std::cout << "-->C\n";
        break;
    break;
    }
    return (base);
}

void    identify(Base* p)
{
    dynamic_cast<A*>(p))
        std::cout << "The object pointer by p is A " << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The object pointer by p is B " << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The object pointer by p is C " << std::endl;
    else
        std::cout << "neither A, B, or C are pointed by p" << std::endl;
}

void    identify(Base& p)
{
        std::cout << "neither A, B, or C are pointed by p" << std::endl;
    try
    {
        dynamic_cast<A&>(p);
    }
    catch (...){}
    
    std::cout << "The object pointer by p is A " << std::endl;

    dynamic_cast<B&>(p);
    std::cout << "The object pointer by p is B " << std::endl;
    dynamic_cast<C&>(p);
    std::cout << "The object pointer by p is C " << std::endl;
}
