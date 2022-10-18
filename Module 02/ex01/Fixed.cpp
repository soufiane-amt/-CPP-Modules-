/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:50:49 by samajat           #+#    #+#             */
/*   Updated: 2022/09/18 21:06:52 by samajat          ###   ########.fr       */
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
    std::cout << "Float constructor called" << std::endl;
    raw = roundf((1 << fractBits) * f);
}

Fixed::Fixed   (const int d)
{
    std::cout << "Int constructor called" << std::endl;
    raw = d << fractBits;
}

int     Fixed::getRawBits(void) const
{
    return (raw);
}

void    Fixed::setRawBits (int const raw)
{
    this->raw = raw;
}

float Fixed::toFloat( void ) const
{
    float f = ((float)(this->getRawBits()) / (1 << fractBits));
    return (f);
}

int Fixed::toInt( void ) const
{
    int d = (raw >> fractBits);

    return (d);
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = fixed.getRawBits();
    
    return (*this);
}

int     Fixed::getFractBits(void) const
{
    return (fractBits);
}

std::ostream& operator<<(std::ostream &COUT, const Fixed &fixed)
{
    float a = fixed.toFloat();
    COUT << a;
    return (COUT);
}


Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}
