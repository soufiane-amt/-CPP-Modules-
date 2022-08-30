/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:21:49 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 13:47:18 by samajat          ###   ########.fr       */
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
    std::string& const getType(void);
    std::string setType(std::string newType);

    private:
    std::string type;
};

#endif