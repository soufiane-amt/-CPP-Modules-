/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:58 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 15:01:43 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define NObjects 2

int main()
{
    Dog c = Dog();
    c.getType();
    Animal *animals[NObjects];
    for (int i = 0; i < NObjects; i++)
    {
        try
        {            
            if (i < NObjects/2)
            {
                animals[i] = new Dog();
            }
            else
            {
                animals[i] = new Cat();
            }
        }
        catch(const std::bad_alloc& e)
        {
            std::cerr << "Memory allocation Failure!" << std::endl;
            return (1);
        }
    }
    for (int i = 0; i < NObjects; i++)
    {
        delete animals[i];
    }
}