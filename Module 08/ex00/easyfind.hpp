/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:55:37 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 00:35:12 by samajat          ###   ########.fr       */
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

template <typename T>
void easyfind(T &container, int i)
{
    typename T::iterator iter;
    int index = -1;
    for (  iter = container.begin(); iter != container.end(); iter++)
    {
        index++;
        if (i == *iter)
        {
            std::cout << "The element exists in index: "  << index << std::endl;
            return;
        }
    }
    throw std::exception();
}
#endif