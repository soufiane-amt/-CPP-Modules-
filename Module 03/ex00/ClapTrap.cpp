/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:46:29 by samajat           #+#    #+#             */
/*   Updated: 2022/09/23 21:22:27 by samajat          ###   ########.fr       */
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
    this->name         = copy.name;
    this->hitPoints    = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
}

void ClapTrap::attack (const std::string& target)
{
    std::cout << "ClapTrap "<< this->name <<" attacks "<< target <<", causing "<< 1 <<" points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount <= this->energyPoints)
    {
        this->attackDamage += amount;
        this->energyPoints -= amount;
    }
    else
    {
        this->attackDamage += this->energyPoints;
        this->energyPoints  = 0;
    }
    std::cout << "ClapTrap "<< this->name <<" has been attacked "<< target <<", getting "<< amount <<" points of damage!" << std::endl;
}

ClapTrap::~ClapTrap (void)
{
    std::cout << this->name << "is dead!" << std::endl;     
}