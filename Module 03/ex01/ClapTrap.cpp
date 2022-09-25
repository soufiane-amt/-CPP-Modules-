/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:46:29 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 12:39:40 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    (*this) = copy;
    std::cout << "ClapTrap " << name << " is copied!" << std::endl;
}

ClapTrap ClapTrap::operator=(ClapTrap &copy)
{
    std::cout << "is here" << std::endl;
    ClapTrap temp("");
    temp.name         = copy.name;
    temp.hitPoints    = copy.hitPoints;
    temp.energyPoints = copy.energyPoints;
    temp.attackDamage = copy.attackDamage;
    return (temp);
}

void ClapTrap::attack (const std::string& target)
{
    if (!energyPoints)
    {
        std::cout << "ClapTrap "<< name << " has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap "<< name <<" attacks "<< target <<" , causing "<< attackDamage <<" points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int lostP = 0;
    if(amount <= hitPoints)
    {
        hitPoints -= amount;
        lostP += amount;
    }
    else
    {
        lostP = hitPoints;
        hitPoints  = 0;
    }
    std::cout << "ClapTrap "<< name <<" has been attacked , getting "<< lostP <<" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int repairation = 0;
    if (!energyPoints)
    {
        std::cout << "ClapTrap "<< name << " has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    if(10 - hitPoints >= amount)
    {
        hitPoints += amount;
        repairation += amount;
    }
    else
    {
        repairation = 10 - hitPoints;
        hitPoints  = 10;
    }
    std::cout << "ClapTrap "<< name <<" has repaired itself, by "<< repairation <<" points !" << std::endl;
}


ClapTrap::~ClapTrap (void)
{
    std::cout << name << "is dead!" << std::endl;     
}