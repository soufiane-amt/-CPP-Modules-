/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:06:54 by samajat           #+#    #+#             */
/*   Updated: 2022/09/27 14:15:21 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
    weapon = NULL;
}

 void HumanB::setWeapon (Weapon &weapon)
 {
     this->weapon = &weapon;
 }


void    HumanB::attack(void)
{
    if(this->weapon->getType() != "")
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}