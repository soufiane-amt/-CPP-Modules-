/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:40:34 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 13:46:59 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.cpp"

std::string& Weapon const getType(void)
{
    return (this->type);
}

std::string Weapon setType(std::string newType)
{
    this->type = newType;
}

Weapon::Weapon(std::string weaponName)
{
    setType(weaponName);
}