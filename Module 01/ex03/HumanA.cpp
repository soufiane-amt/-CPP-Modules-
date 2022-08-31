/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:52:15 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 14:18:42 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :name(name), weapon(weapon)
{
}


void    HumanA::attack(void)
{
    std::cout << this->name << "attacks with their " << this->weapon.getType() << std::endl;
}