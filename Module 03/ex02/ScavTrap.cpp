/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:43:10 by samajat           #+#    #+#             */
/*   Updated: 2022/10/19 21:01:33 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string n):ClapTrap(n, 100, 50, 20)
{
    std::cout << "ScavTrap " << name << " default constructor is called!" << std::endl;
}


//testing assignemnent
ScavTrap::ScavTrap(const ScavTrap &copy)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "ScavTrap " << name << "is copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
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
    std::cout << "ScavTrap "<< name <<" has been attacked , getting "<< amount <<" points of damage!" << std::endl;
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
    std::cout << "ScavTrap " << name << " is dead!" << std::endl;     
}