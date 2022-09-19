/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:56:41 by samajat           #+#    #+#             */
/*   Updated: 2022/09/19 17:15:46 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


Point::Point (void): x(0), y(0){}

Point::Point (const float a, const float b)
{
    x(a);
    y(b);
}

Point::Point (const &Point copy)
{
    
}

Point &Point::operator=(const &Point copy)
{
    this->x = copy.getX();
    this->y = copy.getY();
    return (*this);
}