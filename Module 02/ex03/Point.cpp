/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:56:41 by samajat           #+#    #+#             */
/*   Updated: 2022/09/21 20:57:26 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point (void): x(0), y(0){
}

Point::Point (const float a, const float b): x(Fixed(a)),y(Fixed(b)){
}

Point::Point (const Point &copy): x(copy.getX()), y(copy.getY()) 
{
}

Point &Point::operator=(const Point &copy)
{
    (void)copy;
    return (*this);
}

Fixed Point::getX(void) const
{
    return (x);
}

Fixed Point::getY(void) const
{
    return (y);
}

// void Fixed::setX(Fixed x)
// {
//     this->x = x;
// }
// void Fixed::setY(Fixed y)
// {
//     this->y = y;
// }

Point::~Point(void)
{
    
}
