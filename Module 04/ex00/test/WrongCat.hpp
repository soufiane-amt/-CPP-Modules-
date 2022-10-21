/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:18:46 by samajat           #+#    #+#             */
/*   Updated: 2022/10/21 14:19:34 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT
#define WRONGCAT

//Headers
#include "WrongAnimal.hpp"

//Class
class WrongCat :public WrongAnimal
{
    public:
    WrongCat  (void);
    WrongCat  (const WrongCat &copy);
    WrongCat& operator=(const WrongCat &copy);
    ~WrongCat (void);
    void    makeSound(void) const;
};


#endif