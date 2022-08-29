/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:45:59 by samajat           #+#    #+#             */
/*   Updated: 2022/08/29 21:33:29 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *arr;
    int     i;

    i = 0;
    arr = new Zombie[N];
    while (i < N)
    {
        arr[i].setName(name);
        arr[i].announce();
        i++;
    }
    return (arr);
}