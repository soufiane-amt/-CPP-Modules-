/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:21 by samajat           #+#    #+#             */
/*   Updated: 2022/10/11 19:39:58 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <iomanip>


class Convert
{
    private:
    const char* value;
    static bool    isInt(const char* value);
    static bool    isDouble(const char* value);
    static bool    isFloat(const char* value);
    static bool    isChar(const char* value);
    static bool    isStr(const char* value);
    void    toInt(void);
    void    toDouble(void);
    void    toFloat(void);
    void    toChar(void);

    public:
    Convert  (void);
    Convert  (const char* input);
    Convert  (Convert const &copy);
    Convert& operator=(Convert const &copy);
    void     displayConversions(void);
    ~Convert(void);
};

#endif