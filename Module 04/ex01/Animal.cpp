/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:52:03 by samajat           #+#    #+#             */
/*   Updated: 2022/09/30 14:52:00 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor is called!" << std::endl;
}

Animal::Animal(std::string t):type(t)
{
    std::cout << "Animal constructor is called!" << std::endl;
}

Animal::Animal  (Animal &copy)
{
    std::cout << "Animal Copy constructor is called" << std::endl;
    this->type = copy.type;
}

Animal& Animal::operator=(Animal &copy)
{
    this->type = copy.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}
void Animal::makeSound(void) const
{
    std::cout << "**Animal sound**" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal is destroyed!" << std::endl;
}