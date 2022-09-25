/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:40:44 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 20:54:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

//Headers
#include <iostream>

//Class
class Animal
{
    public:
    Animal  (void);
    Animal  (Animal &copy);
    Animal& operator=(Animal &copy);
    ~Animal (void);
    void    makeSound(void);
    
    protected:
    std::string type;
}


#endif