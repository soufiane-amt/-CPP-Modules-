/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:48:42 by samajat           #+#    #+#             */
/*   Updated: 2022/09/26 13:10:47 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str;
    std::string *stringPTR;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << &str << std::endl << stringPTR <<std::endl << &stringREF<<std::endl;
    std::cout << str << std::endl << *stringPTR <<std::endl << stringREF<<std::endl;
}