/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:02:58 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 00:05:06 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define TOSEARCH 5
int main()
{
    {
    std::vector <int> arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(55);
    easyfind(arr, TOSEARCH);
    }
    {
    std::array <int, 5> arr = {12, 5, 3, 4, 55};
    easyfind(arr, TOSEARCH);
    }
    {
        std::list<int>l;
        for (int i = 0; i < 10; ++i) 
        {
            l.push_back(i * 2);
            l.push_front(i * 3);
        }
        easyfind(l, TOSEARCH);
    }
    return 0;
}