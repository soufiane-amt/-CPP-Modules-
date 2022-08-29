/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:56:54 by samajat           #+#    #+#             */
/*   Updated: 2022/08/29 17:36:47 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  z;
    Zombie  *newZombie;
    
    newZombie = new Zombie(z);
    z.setName(name);
    *newZombie = z;
    return (newZombie);
}