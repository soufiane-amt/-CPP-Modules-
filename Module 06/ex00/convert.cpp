/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:23 by samajat           #+#    #+#             */
/*   Updated: 2022/11/05 17:26:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(const char* input):value(input)
{
}

Convert::Convert(Convert const &copy):value(copy.value)
{
    (void)copy;
}

Convert& Convert::operator=(Convert const &copy)
{
    (void)copy;
    return (*this);
}





///Checkers
bool    Convert::isInt(const char* value)
{
    int len;
    int i;

    i = 0;
    len = strlen(value);
    if (value[i] == '+' || value[i] == '-')
        i++;
    while (value[i])
    {
        if (!isdigit(value[i]))
            return (false);
            i++;
    }
    if (atol(value) < INT_MIN || atol(value) > INT_MAX)
        return (false);
    return (true);
}

bool    Convert::isDouble(const char* value)
{
    int i = 0;

    while (value[i] && isdigit(value[i]))
        i++;
    if (value[i] != '.')
        return (false);
    i++;
    while (value[i] && isdigit(value[i]))
        i++;
    if (value[i])
        return (false);
    return (true);
}

bool    Convert::isFloat(const char* value)
{
    int i = 0;

    while (value[i] && isdigit(value[i]))
        i++;
    if (value[i] != '.')
        return (false);
    i++;
    while (value[i] && isdigit(value[i]))
        i++;
    if (value[i] != 'f' && value[i] != 'F')
        return (false);
    i++;
    if (value[i])
        return (false);
    return (true);    
}

bool    Convert::isChar(const char* value)
{
    if (strlen(value) != 1)
        return (false);
    return (true);    
}

bool    Convert::isImpossible(const char* value)
{
    if (isInt(value) || isDouble(value) || isFloat(value) || isChar(value))
        return (false);
    return (true);
}



/// Converters//Castings


void    Convert::toInt(void)
{
    int               castedValue;

    std::cout << "int: ";
    if (isImpossible(value))
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    else if (isChar(value) && !isdigit(value[0]))
        castedValue = static_cast<int>(value[0]);
    else
        castedValue = static_cast<int>(atoi(value));
    std::cout << castedValue << std::endl;
}

void    Convert::toDouble(void)
{
    double          castedValue;

    std::cout << "double: ";
    if   (!strcmp(value, "nan") || !strcmp(value, "nanf"))
        castedValue = static_cast<double>(atof("nan"));
    else if (!strcmp(value, "+inf") || !strcmp(value, "+inff"))
        castedValue = static_cast<double>(atof("+inf"));
    else if (!strcmp(value, "-inf") || !strcmp(value, "-inff"))
        castedValue = static_cast<double>(atof("-inf"));
    else if (isImpossible(value))
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    else if (isChar(value) && !isdigit(value[0]))
        castedValue = static_cast<double>(value[0]);
    else
        castedValue = static_cast<double>(atof(value));
    std::cout << std::fixed << std::setprecision(1) << castedValue << std::endl;
}

void    Convert::toFloat(void)
{
    float           castedValue;

    std::cout << "float: ";
    if   (!strcmp(value, "nan") || !strcmp(value, "nanf"))
        castedValue = static_cast<float>(atof("nan"));
    else if (!strcmp(value, "+inf") || !strcmp(value, "+inff"))
        castedValue = static_cast<float>(atof("+inf"));
    else if (!strcmp(value, "-inf") || !strcmp(value, "-inff"))
        castedValue = static_cast<float>(atof("-inf"));
    else if (isImpossible(value))
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    else if (isChar(value) && !isdigit(value[0]))
        castedValue = static_cast<float>(value[0]);
    else
        castedValue = static_cast<float>(atof(value));
    std::cout << std::fixed << std::setprecision(1) << castedValue << 'f'<< std::endl;
}


void    Convert::toChar(void)
{
    char            castedValue;

    std::cout << "char: ";
    if (isChar(value) && !isdigit(value[0]))
        castedValue = static_cast<char>(value[0]);
    else if (!isImpossible(value))
    {
        int var = atoi(value);
        if (isprint(var))
            castedValue = static_cast<char>(var);
        else
        {
            std::cout << "Non displayable." << std::endl;
            return;
        }
    }
    else
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    std::cout << "'"<< castedValue << "'"<< std::endl;
}



void Convert::displayConversions(void)
{
    if (!value)
    {
        std::cerr<< "NULL value\n";
        return;
    }
    toChar();
    toInt();
    toFloat();
    toDouble();
}

Convert::~Convert(void)
{
    
}
