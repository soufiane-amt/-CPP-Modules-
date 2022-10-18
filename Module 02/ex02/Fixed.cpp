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
    raw = (d << fractBits);
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
    float f = ((float)(this->getRawBits()) / (1 << fractBits));
    return (f);
}

int Fixed::toInt( void ) const
{
    int d = raw >> fractBits;
    return (d);
}

int     Fixed::getFractBits(void) const 
{
    return (fractBits);
}

//-----Overloaded operators-------//
std::ostream& operator<<(std::ostream &COUT, const Fixed &fixed)
{
    float a = fixed.toFloat();
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
    Fixed sum(this->toFloat() + f.toFloat());

    return (sum);
}


Fixed Fixed::operator-(const Fixed &f)
{
    Fixed abst(this->toFloat() - f.toFloat());

    return (abst);
}

Fixed Fixed::operator*(const Fixed &f)
{
    Fixed mul(this->toFloat() * f.toFloat());
    return (mul);
}


Fixed Fixed::operator/(const Fixed &f)
{
    Fixed div(this->toFloat() / f.toFloat());

    return (div);
}

Fixed Fixed::operator++()
{
    *this = Fixed(this->toFloat() + 1);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    *this = Fixed(this->toFloat() + 1);
    return (tmp);
}
Fixed Fixed::operator--()
{
    *this = Fixed(this->toFloat() - 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    *this = Fixed(this->toFloat() - 1);
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
