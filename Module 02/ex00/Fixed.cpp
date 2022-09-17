/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:50:49 by samajat           #+#    #+#             */
/*   Updated: 2022/09/17 13:20:17 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static const int Fixed::fractBits = 8;

Fixed::Fixed(void)
{
    raw = 0;
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

Fixed &operator =(Fixed &fixed)
{
    this->raw = fixed.raw;
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}