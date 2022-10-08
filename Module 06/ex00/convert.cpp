/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:23 by samajat           #+#    #+#             */
/*   Updated: 2022/10/07 18:19:37 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int ft_isprint (char c)
{
    if (c >= 32 && c <= 127)
        return (true);
    return (false);
}
int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

Convert::Convert(void): value("")
{
}

Convert::Convert(const std::string input):value(input)
{
}

Convert::Convert(Convert const &copy)
{
}

Convert& Convert::operator=(Convert const &copy)
{
}

bool    Convert::isInt(const std::string value)
{
    for (size_t i = 0; i < value.length(); i++)
    {
        if (ft_isdigit(value[i]))
            return (false);
    }
    return (true);
}

bool    Convert::isDouble(const std::string value)
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

bool    Convert::isFloat(const std::string value)
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

bool    Convert::isChar(const std::string value)
{
    if (value.length() != 1)
        return (false);
    return (true);    
}

bool    Convert::isStr(const std::string value)
{
    if (isInt(value) || isDouble(value) || isFloat(value) || isChar(value))
        return (true);
    return (false);    
}

void    Convert::toInt(void)
{
    int               castedValue;

    std::cout << "int: ";
    if (isInt(value))
        std::cout << castedValue << std::endl;
    else
        std::cout << "impossible." << std::endl;
}

void    Convert::toDouble(void)
{
    double            castedValue;
    std::stringstream converter(value);

    std::cout << "double: ";
    if (isDouble(value))
    {
         converter >> castedValue;   
    }     
    std::cout << "impossible." << std::endl;
}

void    Convert::toFloat(void)
{
    
}
void    Convert::toChar(void)
{
    
}

void Convert::displayConversions(void)
{
    //check if null
    if (value.empty())
    {
        std::cerr << "The value is null!" << std::endl;
        return;
    }
    // if (value.isInt())
        
}
