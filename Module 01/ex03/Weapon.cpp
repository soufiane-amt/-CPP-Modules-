/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:40:34 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 17:11:43 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string  &Weapon::getType ()
{
    return (this->type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}

Weapon::Weapon(std::string weaponName)
{
    setType(weaponName);
}