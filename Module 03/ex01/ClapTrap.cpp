/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:46:29 by samajat           #+#    #+#             */
/*   Updated: 2022/09/23 21:40:18 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0){}


ClapTrap::ClapTrap(ClapTrap &copy)
{
    (*this) = copy;
}

ClapTrap operator=(ClapTrap &copy)
{
    name         = copy.name;
    hitPoints    = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
}

void ClapTrap::attack (const std::string& target)
{
    if (!energyPoints)
        std::cout << "ClapTrap "<< name << "has no energy!" << std::endl;
    energyPoints--;
    std::cout << "ClapTrap "<< name <<" attacks "<< target <<", causing "<< attackDamage <<" points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount <= hitPoints)
    {
        // attackDamage += amount;
        hitPoints -= amount;
    }
    else
    {
        // attackDamage += hitPoints;
        hitPoints  = 0;
    }
    std::cout << "ClapTrap "<< name <<" has been attacked "<< target <<", getting "<< amount <<" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!energyPoints)
        std::cout << "ClapTrap "<< name << "has no energy!" << std::endl;
    energyPoints--;
    if(10 - hitPoints >= amount)
        hitPoints += amount;
    else
        hitPoints  = 10;
    std::cout << "ClapTrap "<< name <<" has repaired itself, by "<< amount <<" points !" << std::endl;
}

ClapTrap::~ClapTrap (void)
{
    std::cout << name << "is dead!" << std::endl;     
}