/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:25:09 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 12:33:00 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap n("robot");
    n.attack("lmalawi");
    n.beRepaired(2);
    ClapTrap b(n);
    b.attack("lmalawi");
    b.beRepaired(2);
}