/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:52:03 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 13:44:15 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor is called!" << std::endl;
}

Animal::Animal(std::string t):type(t)
{
    std::cout << "Animal constructor is called!" << std::endl;
}

Animal::Animal  (const Animal &copy)
{
    std::cout << "Animal Copy constructor is called" << std::endl;
    this->type = copy.type;
}

Animal& Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal::~Animal(void)
{
    std::cout << "Animal is destroyed!" << std::endl;
}