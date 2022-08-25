/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCpp.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:06:08 by samajat           #+#    #+#             */
/*   Updated: 2022/08/25 22:28:09 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testHpp.hpp"

Computer::Computer(std::string type, int model, std::string Operating_System)
{
    this.type = type;
    this.model = model;
    this.Operating_System = Operating_System;
    return;
}

Computer :: powerOn(void)
{
    int i;

    i = 0;
    while (i < 10000)
    {
        if (i % 2 == 0)
            std::cout this.Operating_System << " is powering on please wait ...\n";
        i++;
    }
    std::cout << "Welcome to "<<this.Operating_System<<" operating system.\n";
}