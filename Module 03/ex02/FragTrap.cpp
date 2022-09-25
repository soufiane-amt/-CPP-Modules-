/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:38:25 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 19:53:56 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string n):ClapTrap(n, 100, 100, 30)
{
    std::cout << "FragTrap " << name << " default constructor is called!" << std::endl;
}


//testing assignemnent
FragTrap::FragTrap(FragTrap &copy):ClapTrap(copy.name, 100, 100, 30)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << this->name <<" "<< this->hitPoints<<" "<< this->energyPoints << " "<<this->attackDamage<<"\n";
    std::cout << "FragTrap " << name << "is copied!" << std::endl;
}

void FragTrap::ft_swap(FragTrap &a, FragTrap &b)
{
    FragTrap temp = b;

    std::swap(a.name, temp.name);
    std::swap(a.hitPoints, temp.hitPoints);
    std::swap(a.energyPoints, temp.energyPoints);
    std::swap(a.attackDamage, temp.attackDamage);
}

FragTrap& FragTrap::operator=(FragTrap &copy)
{
    std::cout << "Entered\n";
    ft_swap(*this, copy);
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