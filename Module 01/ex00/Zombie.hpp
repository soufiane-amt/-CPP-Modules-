/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:51:14 by samajat           #+#    #+#             */
/*   Updated: 2022/08/29 18:38:12 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

//Headers
#include <iostream>

//Classes

class Zombie
{
    public:
    void            announce(void);
    void            setName(std::string n);
    ~Zombie(); 
    private:
    std::string name; 
     
}; 
 
//funcs 
Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif