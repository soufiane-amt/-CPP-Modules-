/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:24 by samajat           #+#    #+#             */
/*   Updated: 2022/10/07 16:59:55 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// class A
// {
//     int a;
// };

// class B
// {
//     int a ;
// };

#include <sstream>
#include <fstream>
#include <cstdlib>

int main (int argc, char **argv)
{
    (void)argc;
    std::string s = "124.5";
    // int a  = static_cast<int>(s);
    double x = atoi(s.c_str());
    std::cout << x <<std::endl;
}