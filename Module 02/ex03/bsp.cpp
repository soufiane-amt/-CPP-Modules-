/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:49:37 by samajat           #+#    #+#             */
/*   Updated: 2022/09/20 14:35:50 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Fixed   getTwoPointsDistance(Point const p1, Point const p2)// add reference
{
    Fixed dist(sqrt(pow(p2.getX() - pow(p1.getX())) + pow(p2.getY() - pow(p1.getY()))));
    return (dist);
}


Fixed   getSemiParm (Point const a, Point const b, Point const c)
{
    Fixed   two(2.0f);
    Fixed   semiParameter ((getTwoPointsDistance(a, b) + getTwoPointsDistance(b, c) + getTwoPointsDistance(c, a)) / two);
    return (semiParameter);
}

Fixed   getTriangleArea (Point const p1, Point const p2, Point const p3)
{
    Fixed   semiParam = getSemiParm(a, b, c);
    Fixed Area(pow((semiParam * (semiParam - getTwoPointsDistance(a, b)) * (semiParam - getTwoPointsDistance(b, c))\
    * (semiParam - getTwoPointsDistance(a, c))).toFloat(), semiParam));

    return (Area);    
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << getTriangleArea(a, b, c) << std::endl;
}