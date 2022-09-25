/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:46:28 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 15:11:14 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

//Headers
#include <iostream>
#include <string>
#include <algorithm>

class ClapTrap
{
    public:
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &copy);
    void     attack(const std::string& target);
    void     takeDamage(unsigned int amount);
    void     beRepaired(unsigned int amount);
    ClapTrap& operator=(ClapTrap &copy);
    ~ClapTrap(void);

    private:
    void ft_swap(ClapTrap &a, ClapTrap &b);
    std::string  name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
};

#endif