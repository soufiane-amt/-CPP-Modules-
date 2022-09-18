/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:20:09 by samajat           #+#    #+#             */
/*   Updated: 2022/09/18 21:37:35 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

//Headers
#include <iostream>
#include <cmath>
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
    int     getRawBits(void) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    static  Fixed& min(Fixed &f1, Fixed &f2);
    static  Fixed& min(const Fixed &f1, const Fixed &f2);
    static  Fixed& max(Fixed &f1, Fixed &f2);
    static  Fixed& max(const Fixed &f1, const Fixed &f2);
    ~Fixed(void);
    
};
//Adding an overloading function to take care of the case if the paramerter 2 is of Fixed type 
std::ostream& operator <<(std::ostream &COUT, const Fixed &fixed);

#endif

