/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:50:49 by samajat           #+#    #+#             */
/*   Updated: 2022/09/18 20:25:15 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed(void)
{
    raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}


Fixed::Fixed   (const float f)
{
    raw = (f * (1 << fractBits));
}

Fixed::Fixed   (const int d)
{
    raw = d << fractBits;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (raw);
}

void    Fixed::setRawBits (int const raw)
{
    this->raw = raw;
}

float Fixed::toFloat( void ) const
{
    float f = raw >> 8;
    return (f);
}

int Fixed::toInt( void ) const
{
    int d = raw >> 8;
    return (d);
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = fixed.getRawBits();
    
    return (*this);
}

std::ostream& operator<<(std::ostream &COUT, const Fixed &fixed)
{
    float a = (static_cast< float>(fixed.getRawBits()) / (1 << 8));
    // COUT << roundf(a);
    COUT << a;
    // std::cout << "------"<< fixed.getRawBits() << std::endl;
    return (COUT);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}
