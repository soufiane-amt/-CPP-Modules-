/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:38:25 by samajat           #+#    #+#             */
/*   Updated: 2022/10/19 20:29:32 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string n):ClapTrap(n, 100, 100, 30)
{
    std::cout << "FragTrap " << name << " default constructor is called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "FragTrap " << name << "is copied!" << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void FragTrap::attack (const std::string& target)
{
    if (!energyPoints)
    {
        std::cout << "FragTrap "<< name << "has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "FragTrap "<< name <<" attacks "<< target <<", causing "<< attackDamage <<" points of damage!" << std::endl;
}


void FragTrap::takeDamage(unsigned int amount)
{
    if(amount <= hitPoints)
    {
        hitPoints -= amount;
    }
    else
    {
        hitPoints  = 0;
    }
    std::cout << "FragTrap "<< name <<" has been attacked , getting "<< amount <<" points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (!energyPoints)
    {
        std::cout << "FragTrap "<< name << "has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    if(100 - hitPoints >= amount)
        hitPoints += amount;
    else
        hitPoints  = 100;
    std::cout << "FragTrap "<< name <<" has repaired itself, by "<< amount <<" points !" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap request a high five." << std::endl;
}
FragTrap::~FragTrap (void)
{
    std::cout << "FragTrap " << name << " is dead!" << std::endl;     
}