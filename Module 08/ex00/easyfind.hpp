/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:55:37 by samajat           #+#    #+#             */
/*   Updated: 2022/11/07 23:30:10 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

//Headers

#include<iostream>
#include <iterator>
// #include <algorithm>
#include <vector>

template <typename T>
void easyfind(T &container, int i)
{
    typename T::iterator iter;
    for ( iter = container.begin(); iter != container.end(); iter++)
    {
        if (i == *iter)
        {
            std::cout << "The element exists in index: "  << iter - container.begin() << std::endl;
            return;
        }
    }
    std::cout << "The element to search is missing " << std::endl;
}
#endif