/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:43:10 by samajat           #+#    #+#             */
/*   Updated: 2022/09/24 13:20:30 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string name): name(name), hitPoints(100), energyPoints(50), attackDamage(20)
{
    std::cout << "ScavTrap" << name << "is created!" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap &copy)
{
    (*this) = copy;
    std::cout << "ScavTrap" << name << "is copied!" << std::endl;
}

ScavTrap operator=(ScavTrap &copy)
{
    name         = copy.name;
    hitPoints    = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
}

void ScavTrap::attack (const std::string& target)
{
    if (!energyPoints)
    {
        std::cout << "ScavTrap "<< name << "has no energy!" << std::endl;
        return:
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
        return:
    }
    energyPoints--;
    if(100 - hitPoints >= amount)
        hitPoints += amount;
    else
        hitPoints  = 100;
    std::cout << "ScavTrap "<< name <<" has repaired itself, by "<< amount <<" points !" << std::endl;
}

ScavTrap::~ScavTrap (void)
{
    std::cout << name << "is dead!" << std::endl;     
}