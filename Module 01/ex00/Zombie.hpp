/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:51:14 by samajat           #+#    #+#             */
/*   Updated: 2022/09/26 12:31:29 by samajat          ###   ########.fr       */
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
    Zombie(std::string name);
    void            announce(void);
    ~Zombie();
    
    private:
    std::string name; 
    void  setName(std::string n);
     
}; 
 
//funcs 
Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif