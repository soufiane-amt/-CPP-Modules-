/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:09:28 by samajat           #+#    #+#             */
/*   Updated: 2022/10/12 17:36:59 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


//Header
#include <iostream>

//Templates

template <typename T> void swap(T &a, T &b)
{
    T s;

    s = a;
    a = b;
    b = s;
}

template <typename T> T min(T x, T y)
{
    return (x >= y) ? y : x;
}

template <typename T> T max(T x, T y)
{
    return (x <= y) ? y : x;
}

#endif