/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:21 by samajat           #+#    #+#             */
/*   Updated: 2022/10/07 17:07:57 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
    private:
    std::string const value;
    static bool    isInt(const std::string value);
    static bool    isDouble(const std::string value);
    static bool    isFloat(const std::string value);
    static bool    isChar(const std::string value);
    void    toInt(void);
    void    toDouble(void);
    void    toFloat(void);
    void    toChar(void);

    public:
    Convert  (void);
    Convert  (std::string input);
    Convert  (Convert const &copy);
    Convert& operator=(Convert const &copy);
    void     displayConversions(void);
    ~Convert(void);
};

#endif