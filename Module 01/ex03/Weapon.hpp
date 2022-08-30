/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:21:49 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 17:56:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


//Headers
#include "iostream"

//try to handle the case where the user gives you invalid input
//Classes
class Weapon
{
    public:
    Weapon(std::string weaponName);
    const std::string& getType();
    void setType(std::string newType);

    private:
    std::string type;
};

#endif