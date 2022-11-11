/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:55:37 by samajat           #+#    #+#             */
/*   Updated: 2022/11/11 18:43:16 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

//Headers

#include<iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <array>
#include <list>
#include <forward_list>
#include <deque> 
#include <stack>
#include <queue>

// template <typename T>
// void easyfind( const T &container, int i)
// {
//     typename T::const_iterator iter;
//     int index = 0;
//     for (  iter = container.begin(); iter != container.end(); iter++)
//     {
//         if (i == *iter)
//         {
//             std::cout << "The element exists in index: "  << index << std::endl;
//             return;
//         }
//         index++;
//     }
//     throw std::exception();
// }

template <typename T>
void easyfind( const T &container, int i)
{
    if (container.size())
    {

        size_t ind =  std::distance(container.begin(), std::find(container.begin(), container.end(), i));
        if (ind < container.size())
        {
            std::cout << "Found in " << ind << std::endl;
            return;
        }
    }
    throw std::exception();
}

#endif