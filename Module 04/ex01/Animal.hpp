/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:40:44 by samajat           #+#    #+#             */
/*   Updated: 2022/09/30 14:51:13 by samajat          ###   ########.fr       */
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
    void    makeSound(void);
    std::string getType(void) const;
    virtual void makeSound(void) const;
    virtual ~Animal (void);
    
    protected:
    Animal(std::string t);
    std::string type;
};

#endif