/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:40 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 14:57:00 by samajat          ###   ########.fr       */
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
    ~Cat (void);
    void    makeSound(void) const;
};


#endif