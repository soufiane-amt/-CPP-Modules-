/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:25:39 by samajat           #+#    #+#             */
/*   Updated: 2022/09/12 11:03:32 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

 //typedef int (CLASSENAME::*FUCNMEMB)(int , float, int);

Harl::Harl(void)
{
    messages[0] = &Harl::commentNotFound;
    messages[1] = &Harl::debug;
    messages[2] = &Harl::info;
    messages[3] = &Harl::warning;
    messages[4] = &Harl::error;
    levels[0] = "WRONGCOMMENT";
    levels[1] = "DEBUG";
    levels[2] = "INFO";
    levels[3] = "WARNING";
    levels[4] = "ERROR";
}

void    Harl::debug (void)
{
    std::cout << "I love having extra bacon for \
my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info (void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning (void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month." << std::endl;
}

void    Harl::error (void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::commentNotFound(void)
{
    std::cerr << "Harl: I have no such comment." << std::endl;
}

int levelExists(std::string level)
{
    return (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR");
}

void    Harl::complain( std::string level )
{
    int i;

    i = 1;
    while(i < 5 && level != levels[i])
        i++;
    CALL_MEMBER_FN(*this, messages[levelExists(level) * i])();
}
