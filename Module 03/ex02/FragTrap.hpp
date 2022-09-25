/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:38:23 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 19:52:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP


//Headers
#include "ClapTrap.hpp"

class FragTrap :public ClapTrap 
{
    public:
    FragTrap (std::string n);
    FragTrap(FragTrap &copy);
    void     attack (const std::string& target);
    void     takeDamage(unsigned int amount);
    void     beRepaired(unsigned int amount);
    FragTrap &operator=(FragTrap &copy);
    void     ft_swap(FragTrap &a, FragTrap &b);
    void     highFivesGuys(void);
    ~FragTrap (void);
};

#endif