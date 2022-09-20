/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:49:37 by samajat           #+#    #+#             */
/*   Updated: 2022/09/20 15:06:40 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

float   getTwoPointsDistance(Point const p1, Point const p2)// add reference
{
    float   d = sqrt(pow(p2.getX().toFloat() - p1.getX().toFloat(), 2) + pow(p2.getY().toFloat() - p1.getY().toFloat(), 2));
    // Fixed dist(d);
    return (d);
}


float   getSemiParm (Point const a, Point const b, Point const c)
{
    // Fixed   two(2.0f);
    // Fixed   semiParameter ();
    return ((getTwoPointsDistance(a, b) + getTwoPointsDistance(b, c) + getTwoPointsDistance(c, a)) / 2.0);
}

Fixed   getTriangleArea (Point const p1, Point const p2, Point const p3)
{
    float   semiParam = getSemiParm(p1, p2, p3);
    float   area = pow(semiParam * (semiParam - getTwoPointsDistance(p1, p2)) * (semiParam - getTwoPointsDistance(p2, p3)) * (semiParam - getTwoPointsDistance(p1, p3)), semiParam);
    Fixed Area(area);

    return (Area);    
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    (void)point;
    std::cout << a.getX().toFloat() << std::endl;
    //
    std::cout << getTwoPointsDistance(a, b) << std::endl;
    std::cout << getTwoPointsDistance(b, c) << std::endl;
    std::cout << getTwoPointsDistance(a, c) << std::endl;
    std::cout << getSemiParm(a, b, c) << std::endl;
    std::cout << getTriangleArea(a, b, c) << std::endl;
    return true;
}