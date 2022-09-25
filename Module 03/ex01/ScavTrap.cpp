/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:43:10 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 17:19:37 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ScavTrap::ScavTrap (std::string name): name(name), hitPoints(100), energyPoints(50), attackDamage(20)
// {
//     std::cout << "ScavTrap" << name << "is created!" << std::endl;
// }
//: ClapTrap(n, 100, 50, 20){}
ScavTrap::ScavTrap (std::string n):ClapTrap(n)
{
}


//testing assignemnent
ScavTrap::ScavTrap(ScavTrap &copy)
{
    (*this) = copy;
    std::cout << "ScavTrap" << name << "is copied!" << std::endl;
}

void ScavTrap::ft_swap(ScavTrap &a, ScavTrap &b)
{
    ScavTrap temp(b);

    std::swap(a.name, temp.name);
    std::swap(a.hitPoints, temp.hitPoints);
    std::swap(a.energyPoints, temp.energyPoints);
    std::swap(a.attackDamage, temp.attackDamage);
}
ScavTrap &operator=(ScavTrap &copy)
{
    ft_swap(*this, copy);
    return (*this);
}

void ScavTrap::attack (const std::string& target)
{
    if (!energyPoints)
    {
        std::cout << "ScavTrap "<< name << "has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap "<< name <<" attacks "<< target <<", causing "<< attackDamage <<" points of damage!" << std::endl;
}


void ScavTrap::takeDamage(unsigned int amount)
{
    if(amount <= hitPoints)
    {
        hitPoints -= amount;
    }
    else
    {
        hitPoints  = 0;
    }
    std::cout << "ScavTrap "<< name <<" has been attacked "<< target <<", getting "<< amount <<" points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (!energyPoints)
    {
        std::cout << "ScavTrap "<< name << "has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    if(100 - hitPoints >= amount)
        hitPoints += amount;
    else
        hitPoints  = 100;
    std::cout << "ScavTrap "<< name <<" has repaired itself, by "<< amount <<" points !" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
ScavTrap::~ScavTrap (void)
{
    std::cout << name << "is dead!" << std::endl;     
}