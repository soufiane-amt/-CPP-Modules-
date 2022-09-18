/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:20:09 by samajat           #+#    #+#             */
/*   Updated: 2022/09/17 17:02:31 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

//Headers
#include <iostream>

//Class

class Fixed
{
private:
    static const int fractBits;
    int              raw;

public :
    Fixed   (void);
    Fixed   (const Fixed &copy);
    Fixed   (const float f);
    Fixed   (const int n);
    Fixed   &operator =(const Fixed &fixed);
    Fixed   &operator <<(const Fixed &fixed);
    int     getRawBits(void) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    ~Fixed(void);
};

#endif

