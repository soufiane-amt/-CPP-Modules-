/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:40 by samajat           #+#    #+#             */
/*   Updated: 2022/09/28 11:35:27 by samajat          ###   ########.fr       */
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
    Cat  (Cat &copy);
    Cat& operator=(Cat &copy);
    ~Cat (void);
    void    makeSound(void) const;
    
    private:
    Brain* brain;
};


#endif