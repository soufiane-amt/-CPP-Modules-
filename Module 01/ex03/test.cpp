/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:22:49 by samajat           #+#    #+#             */
/*   Updated: 2022/08/30 18:03:43 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
class Wep 
{
private:
    int age;
public:
    Wep(){};
    Wep(int newage): age(newage){};
    const int& getAge(){return (this->age);};
    int l() const{return (1);};
};

std::string &cplus(std::string l)
{
    return (l);
}

int main()
{
    std::string str;

    str = "hello";
    (cplus(str)) = "pop";
    std::cout << str << std::endl;
    return 0;
}