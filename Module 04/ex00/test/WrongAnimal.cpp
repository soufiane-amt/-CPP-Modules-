/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:10:44 by samajat           #+#    #+#             */
/*   Updated: 2022/10/21 14:16:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor is called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string t):type(t)
{
    std::cout << "The WrongAnimal contructor sets the type to " + t << std::endl;
}

WrongAnimal::WrongAnimal  (const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy constructor is called" << std::endl;
    this->type = copy.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    this->type = copy.type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "**WrongAnimal sound**" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal is destroyed!" << std::endl;
}