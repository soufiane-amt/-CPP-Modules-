/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:49:37 by samajat           #+#    #+#             */
/*   Updated: 2022/09/21 21:48:13 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
#include <stdio.h>

float   getTwoPointsDistance(Point const p1, Point const p2)// add reference
{
    float   d = sqrt(pow(p2.getX().getRawBits() - p1.getX().getRawBits(), 2) + pow(p2.getY().getRawBits() - p1.getY().getRawBits(), 2));
    return (d);
}


float   getSemiParm (Point  a, Point  b, Point  c)
{
    float aa = (getTwoPointsDistance(a, b) + getTwoPointsDistance(b, c) + getTwoPointsDistance(c, a)) / 2;
    return aa;
}

float   getTriangleArea (Point const p1, Point const p2, Point const p3)
{    
    float semiParam = getSemiParm(p1, p2, p3);
    float f = sqrt((semiParam * (semiParam - getTwoPointsDistance(p1, p2)) * (semiParam - getTwoPointsDistance(p2, p3)) * (semiParam - getTwoPointsDistance(p1, p3))));

    return (roundf(f));
}

//check the border
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << (getTriangleArea(a, b, c)) << std::endl;
    std::cout << getTriangleArea(point, a, b) << std::endl;
    
    if ((int)getTriangleArea(a, b, c)==(int)((getTriangleArea(point, a, b) + getTriangleArea(point, b, c) + getTriangleArea(point, c, a))))
        std::cout << "yep" << std::endl;
    // std::cout << getTriangleArea(point, a, b) << " -- "<< getTriangleArea(point, b, c) << " -- "<< getTriangleArea(point, c, a) << std::endl;
    return true;
}