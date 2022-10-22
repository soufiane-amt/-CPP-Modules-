/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:51:28 by samajat           #+#    #+#             */
/*   Updated: 2022/10/21 15:06:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain is created!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
}

Brain& Brain::operator=(const Brain &copy)
{
    for (size_t i = 0; i < sizeof(idea)/sizeof(idea[0]); i++)
        this->idea[i] = copy.idea[i];    
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain is destroyed!" << std::endl;
}
