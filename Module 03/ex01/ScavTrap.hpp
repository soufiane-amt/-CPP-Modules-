/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:42:49 by samajat           #+#    #+#             */
/*   Updated: 2022/09/24 13:23:47 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


//Headers
#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap 
{
    public:
    void guardGate();
}

#endif