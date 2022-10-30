/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:04:51 by samajat           #+#    #+#             */
/*   Updated: 2022/10/30 14:24:00 by samajat          ###   ########.fr       */
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
    Dog  (const Dog &copy);
    Dog& operator=(const Dog &copy);
    void makeSound(void) const;
    virtual ~Dog (void);

    private:
    Brain* brain;
};


#endif