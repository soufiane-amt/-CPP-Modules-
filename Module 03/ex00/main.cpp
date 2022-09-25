/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:25:09 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 14:15:21 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap n("robot1");
    n.attack("lmalawi");
    n.beRepaired(2);
    ClapTrap b("robot2");
    b.attack("l7lawi");
    b.beRepaired(2);
    n = b;
}