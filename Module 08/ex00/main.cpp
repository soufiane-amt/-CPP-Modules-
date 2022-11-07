/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:02:58 by samajat           #+#    #+#             */
/*   Updated: 2022/11/07 21:28:18 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector <int> arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    easyfind(arr, 7);
    // std::vector<int>::iterator it;
    // for (it = arr.begin(); it != arr.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    //     if (5 == *it)
    //     {
    //         std::cout << "The element exists in index: "  << it - arr.begin() << std::endl;
    //         return 1;
    //     }
    // }
    return 0;
}