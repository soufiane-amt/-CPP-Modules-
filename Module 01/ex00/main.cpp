/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:18:23 by samajat           #+#    #+#             */
/*   Updated: 2022/09/26 12:30:21 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("Robot");
    z->announce();
    randomChump("a");
    randomChump("b");
    randomChump("c");
    randomChump("d");
    delete z;
}