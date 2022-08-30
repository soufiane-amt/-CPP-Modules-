/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:06:54 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 13:25:26 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon)

 {
    this->name = name;
    this->weapon = weapon;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = 0;
}

//<name> attacks with their <weapon type>
void    HumanB::attack(void)
{
    if(this->weapon)
        std::cout << this->name << "attacks with their " << weapon.type << std::endl;
}