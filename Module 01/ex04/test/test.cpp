/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:06:04 by samajat           #+#    #+#             */
/*   Updated: 2022/09/06 14:52:12 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main ()
{
    std::string s;
    std::fstream l;

    l.open("l", std::ios::in);
    getline (l, s);
    std::cout << s << std::endl;
    getline (l, s);
    std::cout << s << std::endl;
}