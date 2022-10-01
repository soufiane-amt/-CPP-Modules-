/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:51:28 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 14:59:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain is created!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    (void)copy;
}

Brain& Brain::operator=(const Brain &copy)
{
    (void)copy;
    // this->idea = copy.idea;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain is destroyed!" << std::endl;
}
