/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:46:28 by samajat           #+#    #+#             */
/*   Updated: 2022/09/24 12:01:36 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
    public:
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &copy);
    void     attack(const std::string& target);
    void     takeDamage(unsigned int amount);
    void     beRepaired(unsigned int amount);
    ClapTrap operator=(ClapTrap &copy);
    ~ClapTrap(void);

    protected:
    str::string name;
    int         hitPoints;
    int         energyPoints;
    int         attackDamage;
}

#endif