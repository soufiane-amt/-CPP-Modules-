/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:31:43 by samajat           #+#    #+#             */
/*   Updated: 2022/09/04 18:55:15 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
    std::fstream     file;
    std::string str;

    str = "ll";
    std::cout << (int)(str.find("lr"));
    // file.open("l", std::ios::in);
    // getline(file, str);
    // std::cout <<  str <<std::endl;
    // getline(file, str);
    // std::cout <<  str <<std::endl;
    // getline(file, str);
    // std::cout <<  str <<std::endl;
    // while(getline(file, str))
    // {
    //     std::cout << str << std::endl;
    // }
}
