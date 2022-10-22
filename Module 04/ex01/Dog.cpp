/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:01:55 by samajat           #+#    #+#             */
/*   Updated: 2022/10/22 13:15:18 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog constructor is called" << std::endl;
}

Dog::Dog  (const Dog &copy)
{
    std::cout << "Dog Copy constructor is called" << std::endl;
    this->type = copy.type;
}

Dog& Dog::operator=(const Dog &copy)
{
    this->type = copy.type;
    return (*this);
}
void Dog::makeSound(void) const
{
    std::cout << "**HawHaw**" << std::endl;
}

Dog::~Dog(void)
{
    delete brain;
    std::cout << "Dog is destroyed!" << std::endl;
}