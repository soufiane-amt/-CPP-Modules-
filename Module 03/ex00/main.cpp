/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:25:09 by samajat           #+#    #+#             */
/*   Updated: 2022/10/19 19:03:48 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap n;
    n.attack("enemy1");
    n.beRepaired(2);
    ClapTrap b("robot2");
    b.attack("enemy2");
    b.beRepaired(10);
    n = b;
}