/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:24 by samajat           #+#    #+#             */
/*   Updated: 2022/10/07 15:12:05 by samajat          ###   ########.fr       */
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
    std::stringstream ss;
    ss << "3.45f";
    float s = 3.0F;
    if (ss >> s)
        std::cout << "cool\n";
    else
        std::cout << "not cool\n";
    std::cout << s << std::endl;
    // std::string o = "op";
    // char a = (char;
}