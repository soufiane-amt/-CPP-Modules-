/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:50:49 by samajat           #+#    #+#             */
/*   Updated: 2022/09/19 16:44:15 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::fractBits = 8;

//-----Constructor-------//

Fixed::Fixed(void)
{
    raw = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}


Fixed::Fixed   (const float f)
{
    raw = roundf(f * (1 << fractBits));
}

Fixed::Fixed   (const int d)
{
    raw = roundf(d << fractBits);
}

//-----getter/setters-------//

int     Fixed::getRawBits(void) const
{
    return (raw);
}

void    Fixed::setRawBits (int const raw)
{
    this->raw = raw;
}

//-----Conversion-------//

float Fixed::toFloat( void ) const
{
    float f = (static_cast< float>(this->getRawBits()) / (1 << 8));
    return (f);
}

int Fixed::toInt( void ) const
{
    int d = raw >> 8;
    return (d);
}

//-----Overloaded operators-------//
std::ostream& operator<<(std::ostream &COUT, const Fixed &fixed)
{
    float a = (static_cast< float>(fixed.getRawBits()) / (1 << 8));
    COUT << a;
    return (COUT);
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    this->raw = fixed.getRawBits();
    
    return (*this);
}

bool Fixed::operator<(const Fixed &f) const
{
    return (this->getRawBits() < f.getRawBits());
}

bool Fixed::operator>(const Fixed &f) const
{
    return (this->getRawBits() > f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f) const
{
    return (this->getRawBits() != f.getRawBits());
}
bool Fixed::operator<=(const Fixed &f) const
{
    return (this->getRawBits() <= f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f) const
{
    return (this->getRawBits() >= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f) const
{
    return (this->getRawBits() == f.getRawBits());
}


Fixed Fixed::operator+(const Fixed &f)
{
    Fixed sum;

    sum.setRawBits(this->getRawBits() + f.getRawBits());
    return (sum);
}


Fixed Fixed::operator-(const Fixed &f)
{
    Fixed abst;

    abst.setRawBits(this->getRawBits() - f.getRawBits());
    return (abst);
}


Fixed Fixed::operator*(const Fixed &f)
{
    Fixed mul;

    mul.setRawBits(this->getRawBits() * f.getRawBits()/(1 << fractBits));
    return (mul);
}


Fixed Fixed::operator/(const Fixed &f)
{
    Fixed div;

    div.setRawBits(this->getRawBits() / f.getRawBits()/(1 << fractBits));
    return (div);
}
//

Fixed Fixed::operator++()
{
    raw++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    raw++;
    return (tmp);
}





//-----Min/Max-------//

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return (f2);
    return (f1);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 < f2)
        return (f2);
    return (f1);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f2);
    return (f1);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f2);
    return (f1);
}


//-----destructor-------//

Fixed::~Fixed(void)
{
}
