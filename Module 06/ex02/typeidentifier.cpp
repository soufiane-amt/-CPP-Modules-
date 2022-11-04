/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeidentifier.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:38:14 by samajat           #+#    #+#             */
/*   Updated: 2022/11/04 19:11:31 by samajat          ###   ########.fr       */
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
        break;
    
    case 1:
        base = new B();
        break;
    
    case 2:
        base = new C();
        break;
    break;
    }
    return (base);
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
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
    std::string message = "The object pointer by p is ";
    std::string id = "";
    try{
        A &Ac = dynamic_cast<A&>(p);(void)Ac;
        id = "A";
    }
    catch (std::bad_cast &a)
    {
        try
        {
            B &Bc = dynamic_cast<B&>(p);(void)Bc;
            id = "B";
        }
        catch (std::bad_cast &b)
        {
            try
            {
                C &Cc = dynamic_cast<C&>(p);(void)Cc;
                id = "C";
            }
            catch (std::bad_cast &c)
            {
                
                std::cout << "neither A, B, or C are pointed by p" << std::endl;
                return;
            }
        }
    }
    std::cout << "The object pointer by p is " + id << std::endl;
}
