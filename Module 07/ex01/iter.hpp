/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:45:43 by samajat           #+#    #+#             */
/*   Updated: 2022/11/06 19:35:30 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T> 
void iter (T *arr, size_t len, void func (T const & x))
{
    for (size_t i = 0; i < len; i++)
        func(arr[i]);
} 

#endif