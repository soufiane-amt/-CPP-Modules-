/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:40 by samajat           #+#    #+#             */
/*   Updated: 2022/10/30 14:23:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT

//Headers
#include "Animal.hpp"
#include "Brain.hpp"

//Class
class Cat :public Animal
{
    public:
    Cat  (void);
    Cat  (const Cat &copy);
    Cat& operator=(const Cat &copy);
    virtual ~Cat (void);
    void    makeSound(void) const;
    
    private:
    Brain* brain;
};


#endif