/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:49:37 by samajat           #+#    #+#             */
/*   Updated: 2022/09/21 19:57:42 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Fixed   getTwoPointsDistance(Point const p1, Point const p2)// add reference
{
    Fixed   d = (float)sqrt(pow(p2.getX().toFloat() - p1.getX().toFloat(), 2) + pow(p2.getY().toFloat() - p1.getY().toFloat(), 2));
    return (d);
}


Fixed   getSemiParm (Point  a, Point  b, Point  c)
{
    Fixed aa = (getTwoPointsDistance(a, b) + getTwoPointsDistance(b, c) + getTwoPointsDistance(c, a)) / Fixed(2);
    return aa;
}

Fixed   getTriangleArea (Point const p1, Point const p2, Point const p3)
{
    Fixed   semiParam = getSemiParm(p1, p2, p3);
    
    float f = sqrt((semiParam * (semiParam - getTwoPointsDistance(p1, p2)) * (semiParam - getTwoPointsDistance(p2, p3)) * (semiParam - getTwoPointsDistance(p1, p3))).toFloat());
    Fixed   area = f;
    Fixed   Area(area);

    return (Area);
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (getTriangleArea(a, b, c) == (getTriangleArea(point, a, b) + getTriangleArea(point, b, c) + getTriangleArea(point, c, a)))
        std::cout << "yep" << std::endl;
    std::cout << (getTriangleArea(a, b, c)) << std::endl;
    std::cout << getTriangleArea(point, a, b) + getTriangleArea(point, b, c) + getTriangleArea(point, c, a) << std::endl;
    std::cout << getTriangleArea(point, a, b) << " -- "<< getTriangleArea(point, b, c) << " -- "<< getTriangleArea(point, c, a) << std::endl;
    return true;
}