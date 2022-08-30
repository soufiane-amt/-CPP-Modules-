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

int main ()
{
    Wep t(18);
    Wep R(18); 
    t = R;
    // std::cout << t.l() << std::endl;
}