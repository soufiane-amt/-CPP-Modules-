/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:42:49 by samajat           #+#    #+#             */
/*   Updated: 2022/10/19 21:02:03 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


//Headers
#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap 
{
    public:
    ScavTrap (std::string n = "");
    ScavTrap(const ScavTrap &copy);
    void     attack (const std::string& target);
    void     takeDamage(unsigned int amount);
    void     beRepaired(unsigned int amount);
    ScavTrap &operator=(const ScavTrap &copy);
    void     guardGate();
    ~ScavTrap (void);
};

#endif