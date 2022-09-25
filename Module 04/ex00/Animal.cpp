/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:52:03 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 21:05:58 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):type(""){}

Animal::Animal  (Animal &copy) : (copy.type)("")
{
}

Animal& operator=(Animal &copy)
{
    this->type = copy.type;
}

Animal::~Animal(void)
{
    std::cout << "Animal is destroyed!" << std::endl;
}