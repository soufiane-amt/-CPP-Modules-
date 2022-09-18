/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:50:49 by samajat           #+#    #+#             */
/*   Updated: 2022/09/18 22:48:33 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::fractBits = 8;

//-----Constructor-------//

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
    raw = roundf(f * (1 << fractBits));
}

Fixed::Fixed   (const int d)
{
    std::cout << "Int constructor called" << std::endl;
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
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = fixed.getRawBits();
    
    return (*this);
}

bool operator<(const Fixed &f1, const Fixed &f2)
{
    return (f1.getRawBits() < f2.getRawBits());
}

bool operator>(const Fixed &f1, const Fixed &f2)
{
    return (f1.getRawBits() < f2.getRawBits());
}

bool operator>=(const Fixed &f1, const Fixed &f2)
{
    return (f1.getRawBits() >= f2.getRawBits());
}
bool operator<=(const Fixed &f1, const Fixed &f2)
{
    return (f1.getRawBits() >= f2.getRawBits());
}

bool operator==(const Fixed &f1, const Fixed &f2)
{
    return (f1.getRawBits() == f2.getRawBits());
}


bool operator!=(const Fixed &f1, const Fixed &f2)
{
    return (f1.getRawBits() != f2.getRawBits());
}

Fixed operator+(const Fixed &f1, const Fixed &f2)
{
    Fixed sum;

    sum.setRawBits(f1.getRawBits() + f2.getRawBits());
    return (sum);
}





//-----Min/Max-------//

static  Fixed& Fixed::min(const Fixed &f1, const Fixed &f2);
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f2);
    return (f1)
}

static  Fixed& Fixed::max(const Fixed &f1, const Fixed &f2);
{
    if (f1.getRawBits() < f2.getRawBits())
        return (f2);
    return (f1)
}
static  Fixed& Fixed::min(Fixed &f1, Fixed &f2);
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f2);
    return (f1)
}

static  Fixed& Fixed::max(Fixed &f1, Fixed &f2);
{
    if (f1.getRawBits() < f2.getRawBits())
        return (f2);
    return (f1)
}


//-----destructor-------//

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}
