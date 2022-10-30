/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:40 by samajat           #+#    #+#             */
/*   Updated: 2022/10/30 14:22:34 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT

//Headers
#include "Animal.hpp"

//Class
class Cat :public Animal
{
    public:
    Cat  (void);
    Cat  (const Cat &copy);
    Cat& operator=(const Cat &copy);
    void makeSound(void) const;
    virtual ~Cat (void);
};


#endif