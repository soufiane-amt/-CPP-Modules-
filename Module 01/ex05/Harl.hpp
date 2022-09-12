/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:23:41 by samajat           #+#    #+#             */
/*   Updated: 2022/09/11 21:05:04 by samajat          ###   ########.fr       */
/**/
/* ************************************************************************** */

#ifndef HARL
#define HARL

//Headers
#include <iostream>

//Class
// typedef void (Harl::*ptrFunc)(void);
#define CALL_MEMBER_FN(object,ptrToMember)  ((object).*(ptrToMember))

class Harl
{
private:
    typedef void (Harl::*messagePtr)();
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void commentNotFound(void);
    messagePtr messages[5];
    std::string levels[4];

public:
    Harl(void);
    void complain( std::string level );
};

#endif