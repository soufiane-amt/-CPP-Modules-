/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:38 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 21:12:54 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):type("Cat"){}

Cat::Cat  (Cat &copy)
{
    this->type = copy.type;
}

Cat& operator=(Cat &copy)
{
    this->type = copy.type;
}

Cat::~Cat(void)
{
    std::cout << "Cat is destroyed!" << std::endl;
}