/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:21 by samajat           #+#    #+#             */
/*   Updated: 2022/10/07 16:06:24 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
    private:
    std::string const value;
    bool    isInt(void);
    bool    isDouble(void);
    bool    isFloat(void);
    bool    isChar(void);

    public:
    Convert  (void);
    Convert  (std::string input);
    Convert  (Convert const &copy);
    Convert& operator=(Convert const &copy);
    void     displayConversions(void);
    ~Convert(void);
};

#endif