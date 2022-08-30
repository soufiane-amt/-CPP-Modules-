/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:08:10 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 13:08:12 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

//Header
#include <iostream>

//Classes
class HumanB
{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanB(std::string name, Weapon weapon);
        HumanB(std::string name);
        void    attack();
};

#endif