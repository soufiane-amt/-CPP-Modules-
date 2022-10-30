/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:01:55 by samajat           #+#    #+#             */
/*   Updated: 2022/10/29 14:12:25 by samajat          ###   ########.fr       */
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
    this->brain = new Brain;
    *brain = *(copy.brain);
    this->type = copy.type;
}

Dog& Dog::operator=(const Dog &copy)
{
    this->type = copy.type;
    *brain = *(copy.brain);
    return (*this);
}
void Dog::makeSound(void) const
{
    std::cout << "**HawHaw**" << std::endl;
}

Dog::~Dog(void)
{
    delete brain;
    std::cout << "dog is destroyed!" << std::endl;
}