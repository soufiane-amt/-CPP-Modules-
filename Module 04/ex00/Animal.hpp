/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:40:44 by samajat           #+#    #+#             */
/*   Updated: 2022/10/30 14:22:24 by samajat          ###   ########.fr       */
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
    Animal();
    Animal (const Animal &copy);
    Animal& operator=(const Animal &copy);
    std::string getType(void) const;
    virtual void makeSound(void) const;
    virtual ~Animal (void);
    
    protected:
    Animal(std::string t);
    std::string type;
};

#endif