/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:49:37 by samajat           #+#    #+#             */
/*   Updated: 2022/09/22 14:15:35 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"


float   getTwoPointsDistance(Point const p1, Point const p2)// add reference
{
    float   d = sqrt(pow(p2.getX().toFloat() - p1.getX().toFloat(), 2) + pow(p2.getY().toFloat() - p1.getY().toFloat(), 2));
    return (d);
}


float   getSemiParm (Point const a, Point const b, Point const c)
{
    return ((getTwoPointsDistance(a, b) + getTwoPointsDistance(b, c) + getTwoPointsDistance(c, a)) / 2.0);
}

float   getTriangleArea (Point const p1, Point const p2, Point const p3)
{
    float   semiParam = getSemiParm(p1, p2, p3);
    float   area = sqrt(semiParam * (semiParam - getTwoPointsDistance(p1, p2)) * (semiParam - getTwoPointsDistance(p2, p3)) * (semiParam - getTwoPointsDistance(p1, p3)));

    return (area);    
}

bool  pointIsVertexEdge(Point const a, Point const b, Point const c, Point const point)
{
    return (!getTriangleArea(point, a, b) || !getTriangleArea(point, b, c) || !getTriangleArea(point, c, a));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed abc(getTriangleArea(a, b, c));
    Fixed abcp(getTriangleArea(point, a, b) + getTriangleArea(point, b, c) + getTriangleArea(point, c, a));
    if (abc >= abcp && !pointIsVertexEdge(a, b, c, point))
        return true;
    return false;
}