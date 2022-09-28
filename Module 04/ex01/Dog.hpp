/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:04:51 by samajat           #+#    #+#             */
/*   Updated: 2022/09/28 11:35:29 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG

//Headers
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

//Class
class Dog :public Animal
{
    public:
    Dog  (void);
    Dog  (Dog &copy);
    Dog& operator=(Dog &copy);
    ~Dog (void);
    void    makeSound(void) const;

    private:
    Brain* brain;
};


#endif