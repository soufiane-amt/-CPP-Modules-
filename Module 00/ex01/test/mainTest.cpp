/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:18:10 by samajat           #+#    #+#             */
/*   Updated: 2022/08/25 22:27:44 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testHpp.hpp"

int main ()
{
    Computer pc;
    
    pc.Computer ("hp", "2022", "windows");
    
    pc.powerOn();
}