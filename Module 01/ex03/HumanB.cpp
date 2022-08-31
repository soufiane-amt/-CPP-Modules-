/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:06:54 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 14:22:20 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
}
// HumanB::HumanB(std::string name)
// {
//     this->name = name;
//     this->weapon.setType("");
// }
 void HumanB::setWeapon (Weapon &weapon)
 {
     this->weapon = &weapon;
 }

//<name> attacks with their <weapon type>
void    HumanB::attack(void)
{
    if(this->weapon->getType() != "")
        std::cout << this->name << "attacks with their " << weapon->getType() << std::endl;
}