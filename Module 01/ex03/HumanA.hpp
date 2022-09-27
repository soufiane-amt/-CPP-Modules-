/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:01:03 by samajat           #+#    #+#             */
/*   Updated: 2022/09/27 14:17:08 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

//Header
#include <iostream>
#include "Weapon.hpp"

//Classes
class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        void    attack();
};

#endif