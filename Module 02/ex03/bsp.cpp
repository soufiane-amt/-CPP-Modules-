/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:49:37 by samajat           #+#    #+#             */
/*   Updated: 2022/09/20 13:57:41 by samajat          ###   ########.fr       */
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
    Fixed   semiParameter ((getTwoPointsDistance(a, b) + getTwoPointsDistance(a, b) + getTwoPointsDistance(a, b)) / );
}

Fixed   getTriangleArea (Point const a, Point const b, Point const c)
{
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    
}