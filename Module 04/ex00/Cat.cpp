/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:38 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 21:21:01 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string type): Animal(type){}

Cat::Cat  (Cat &copy)
{
    this->type = copy.type;
}

Cat& operator=(Cat &copy)
{
}

Cat::~Cat(void)
{
    std::cout << "Cat is destroyed!" << std::endl;
}