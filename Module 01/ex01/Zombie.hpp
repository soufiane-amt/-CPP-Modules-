/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:51:14 by samajat           #+#    #+#             */
/*   Updated: 2022/09/27 11:46:15 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

//Headers
#include <iostream>
#include <string>

//Classes

class Zombie
{
    public:
    Zombie(void);
    Zombie(std::string name);
    void  announce(void);
    void  setName(std::string n);
    ~Zombie();
    
    private:
    std::string name; 
     
}; 
 
//funcs 
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif