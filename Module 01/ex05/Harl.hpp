/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:23:41 by samajat           #+#    #+#             */
/*   Updated: 2022/09/09 21:31:34 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL

//Headers
#include <iostream>

//Class

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void (*comment[])();
    std::string levels[5];

public:
    Harl(void);
    void complain( std::string level );
};

#endif
