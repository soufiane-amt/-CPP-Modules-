/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:23 by samajat           #+#    #+#             */
/*   Updated: 2022/10/07 16:41:24 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(void): value(0)
{
}

Convert::Convert(std::string input):value(input)
{
}

Convert::Convert(Convert const &copy)
{
}

Convert& Convert::operator=(Convert const &copy)
{
}

bool    Convert::isInt(void)
{
    for (size_t i = 0; i < value.length(); i++)
    {
        if (ft_isdigit(value[i]))
            return (false);
    }
    return (true);
}
bool    Convert::isDouble(void)
{
    int i = 0;

    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i] != '.')
        return (false);
    i++;
    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i])
        return (false);
    return (true);    
}

bool    Convert::isFloat(void)
{
    int i = 0;

    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i] != '.')
        return (false);
    i++;
    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i] != 'f' || value[i] != 'F')
        return (false);
    i++;
    if (value[i])
        return (false);
    return (true);    
}

bool    Convert::isChar(void)
{
    if (value.length() != 1)
        return (false);
    return (true);    
}

void Convert::displayConversions(void)
{
    //check if null
}

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}