/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testHpp.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:00:06 by samajat           #+#    #+#             */
/*   Updated: 2022/08/25 22:23:28 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef testHpp
#define testHpp

//Header
#include <iostream>
#include "testCpp.cpp"
//classes
class Computer
{
    public:
        Computer (std::string type, int model, std::string Operating_System);
        std::string type;        
        std::string Operating_System;
        int model;
        
        void    powerOn(void);
};


#endif