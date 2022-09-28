/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:51:28 by samajat           #+#    #+#             */
/*   Updated: 2022/09/28 10:52:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain is created!" << std::endl;
}

Brain::Brain(Brain &copy)
{
    (void)copy;
}

Brain& Brain::operator=(Brain &copy)
{
    (void)copy;
    // this->idea = copy.idea;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain is destroyed!" << std::endl;
}
