/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:53:10 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 18:32:33 by samajat          ###   ########.fr       */
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
    ScavTrap a = t;
}