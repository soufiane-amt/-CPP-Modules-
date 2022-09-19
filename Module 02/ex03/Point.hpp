/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:56:50 by samajat           #+#    #+#             */
/*   Updated: 2022/09/19 17:25:48 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

//Headers
#include "Fixed.hpp"

class Point
{
    private:
    Fixed const x;
    Fixed const y;
    

    public:
    Point (void);
    Point (const float a, const float b);
    Point (const Point &copy);

    Fixed getX(void);
    Fixed getY(void);
    void setX(Fixed x);
    void setY(Fixed y);

    Point &operator=(const Point &point);

    ~Point(void);
};


#endif