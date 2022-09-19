/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:56:41 by samajat           #+#    #+#             */
/*   Updated: 2022/09/19 17:26:02 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point (void): x(0), y(0){}

Point::Point (const float a, const float b)
{
    x(a);
    y(b);
}

Point::Point (const Point &copy)
{
    (*this) = copy;
}

Point &Point::operator=(const Point &copy)
{
    this->x = copy.getX();
    this->y = copy.getY();
    return (*this);
}

Fixed::Fixed getX(void)
{
    return (x);
}

Fixed::Fixed getY(void)
{
    return (y);
}

void Fixed::setX(Fixed x)
{
    this->x = x;
}
void Fixed::setY(Fixed y)
{
    this->y = y;
}

Point::~Point(void)
{
    
}