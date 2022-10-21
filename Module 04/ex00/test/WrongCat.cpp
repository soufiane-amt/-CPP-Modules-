/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:18:04 by samajat           #+#    #+#             */
/*   Updated: 2022/10/21 14:25:57 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor is called" << std::endl;
}

WrongCat::WrongCat  (const WrongCat &copy)
{
    std::cout << "WrongCat Copy constructor is called" << std::endl;
    this->type = copy.type;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    this->type = copy.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "**Wrong MyaW**" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat is destroyed!" << std::endl;
}