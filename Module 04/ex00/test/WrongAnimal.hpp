/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:17:13 by samajat           #+#    #+#             */
/*   Updated: 2022/10/21 14:25:07 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL
#define WRONGANIMAL

//Headers
#include <iostream>
 
//Class
class WrongAnimal
{
    public:
    WrongAnimal();
    WrongAnimal (const WrongAnimal &copy);
    WrongAnimal& operator=(const WrongAnimal &copy);
    std::string getType(void) const;
    virtual void makeSound(void) const;
    ~WrongAnimal (void);
    
    protected:
    WrongAnimal(std::string t);
    std::string type;
};

#endif