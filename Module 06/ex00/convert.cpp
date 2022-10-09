/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:23 by samajat           #+#    #+#             */
/*   Updated: 2022/10/09 15:09:50 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

Convert::Convert(void): value("")
{
}

Convert::Convert(const char* input):value(input)
{
}

Convert::Convert(Convert const &copy)
{
    (void)copy;
}

Convert& Convert::operator=(Convert const &copy)
{
    (void)copy;
    return (*this);
}

bool    Convert::isInt(const char* value)
{
    int len;

    len = ft_strlen(value);
    for (int i = 0; i < len; i++)
    {
        if (!ft_isdigit(value[i]))
            return (false);
    }
    return (true);
}

bool    Convert::isDouble(const char* value)
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

bool    Convert::isFloat(const char* value)
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

bool    Convert::isChar(const char* value)
{
    if (ft_strlen(value) != 1)
        return (false);
    return (true);    
}

bool    Convert::isStr(const char* value)
{
    if (isInt(value) || isDouble(value) || isFloat(value) || isChar(value))
        return (false);
    return (true);
}

void    Convert::toInt(void)
{
    int               castedValue;

    std::cout << "int: ";
    if (isStr(value))
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    else if (isChar(value) && !ft_isdigit(value[0]))
        castedValue = static_cast<int>(value[0]);
    else
        castedValue = atoi(value);
    std::cout << castedValue << std::endl;
}

void    Convert::toDouble(void)
{
    double          castedValue;
    std::string     zeroAfterPoint = "";

    std::cout << "double: ";
    if   (!ft_strcmp(value, "nan") || !ft_strcmp(value, "nanf"))
        castedValue = static_cast<double>(atof("nan"));
    else if (!ft_strcmp(value, "+inf") || !ft_strcmp(value, "+inff"))
        castedValue = static_cast<double>(atof("+inf"));
    else if (!ft_strcmp(value, "-inf") || !ft_strcmp(value, "-inff"))
        castedValue = static_cast<double>(atof("-inf"));
    else if (isStr(value))
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    else if (isChar(value) && !ft_isdigit(value[0]))
        castedValue = static_cast<double>(value[0]);
    else
    {
        castedValue = atof(value);
        if (castedValue == atoi(value))
            zeroAfterPoint = ".0";
    }
    std::cout << castedValue << zeroAfterPoint << std::endl;
}

void    Convert::toFloat(void)
{
    float           castedValue;
    std::string     zeroAfterPoint = "";

    std::cout << "float: ";
    if   (!ft_strcmp(value, "nan") || !ft_strcmp(value, "nanf"))
        castedValue = static_cast<float>(atof("nan"));
    else if (!ft_strcmp(value, "+inf") || !ft_strcmp(value, "+inff"))
        castedValue = static_cast<float>(atof("+inf"));
    else if (!ft_strcmp(value, "-inf") || !ft_strcmp(value, "-inff"))
        castedValue = static_cast<float>(atof("-inf"));
    else if (isStr(value))
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    else if (isChar(value) && !ft_isdigit(value[0]))
        castedValue = static_cast<float>(value[0]);
    else
    {
        castedValue = atof(value);
        if (castedValue == atoi(value))
            zeroAfterPoint = ".0";
    }
    std::cout << castedValue << zeroAfterPoint+'f'<< std::endl;
}
void    Convert::toChar(void)
{
    char            castedValue;

    std::cout << "char: ";
    if (isChar(value) && !ft_isdigit(value[0]))
        castedValue = static_cast<char>(value[0]);
    else if (!isStr(value))
        castedValue = static_cast<char>(atoi(value));
    else
    {
        std::cout << "impossible." << std::endl;
        return;
    }
    std::cout << "'"<< castedValue << "'"<< std::endl;
}

void Convert::displayConversions(void)
{
    //check if null
    if (!ft_strcmp(value, ""))
    {
        std::cerr << "The value is null!" << std::endl;
        return;
    }
    toInt();
    toDouble();
    toFloat();
    toChar();
}

Convert::~Convert(void)
{
    
}