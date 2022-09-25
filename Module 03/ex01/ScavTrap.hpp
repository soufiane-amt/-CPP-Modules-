/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:42:49 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 18:23:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


//Headers
#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap 
{
    public:
    ScavTrap (std::string n);
    ScavTrap(ScavTrap &copy);
    void attack (const std::string& target);
    ScavTrap &operator=(ScavTrap &copy);
    void guardGate();
    void ft_swap(ScavTrap &a, ScavTrap &b);
    ~ScavTrap (void);
};

#endif