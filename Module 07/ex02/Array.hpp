/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:30:39 by samajat           #+#    #+#             */
/*   Updated: 2022/10/13 13:23:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
#define ARRAY

//Header
#include <iostream>

//classes
template<class T>
class Array
{
    T      *arr;
    unsigned int len;
    public:
    Array();
    Array(unsigned int l);
    Array(const Array &copy);
    Array &operator=(const Array &copy);
    T& operator[](unsigned int i);
    unsigned int size();
    ~Array();
};

#endif