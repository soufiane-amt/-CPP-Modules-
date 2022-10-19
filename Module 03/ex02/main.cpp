/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:53:10 by samajat           #+#    #+#             */
/*   Updated: 2022/10/19 21:04:38 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    FragTrap t("chalb");
    t.attack("harold");
    t.takeDamage(8);
    t.takeDamage(8);
    t.beRepaired(8);
    std::cout << "-----------\n";
    FragTrap a("tb");
    a.attack("arnold");
    a.takeDamage(8);
    a.takeDamage(8);
    a.beRepaired(8);
    a.highFivesGuys();
}