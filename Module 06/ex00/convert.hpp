/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:21 by samajat           #+#    #+#             */
/*   Updated: 2022/11/04 18:37:38 by samajat          ###   ########.fr       */
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
    bool    isInt(const char* value);
    bool    isDouble(const char* value);
    bool    isFloat(const char* value);
    bool    isChar(const char* value);
    bool    isStr(const char* value);
    void    toInt(void);
    void    toDouble(void);
    void    toFloat(void);
    void    toChar(void);

    public:
    Convert  (const char* input=NULL);
    Convert  (Convert const &copy);
    Convert& operator=(Convert const &copy);
    void     displayConversions(void);
    ~Convert(void);
};

#endif