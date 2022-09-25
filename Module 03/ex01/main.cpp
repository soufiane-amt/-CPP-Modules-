/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:53:10 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 19:12:03 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
    ScavTrap t("chalb");
    t.attack("harold");
    t.takeDamage(8);
    t.takeDamage(8);
    t.beRepaired(8);
    std::cout << "-----------\n";
    ScavTrap a = t;
    a.attack("arnold");
    a.takeDamage(8);
    a.takeDamage(8);
    a.beRepaired(8);
}