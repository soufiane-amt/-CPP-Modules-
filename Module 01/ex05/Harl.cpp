/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:25:39 by samajat           #+#    #+#             */
/*   Updated: 2022/09/09 21:31:47 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void)
{
    messages = {debug, info, warning, error};
    levels = {"WRONGLEVEL", "DEBUG", "INFO", "WARNING", "ERROR"};
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
    this->comment[levelExists(level) * i];
}
