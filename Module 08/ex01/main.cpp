/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:04:17 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 00:41:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define SIZE 1000
int main()
{
    try
    {
        Span sp = Span(6);
        sp.addNumber(6);
        sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        sp.addNumbers(5, (int[]){6, 3, 5, 7, 1});
        // std::vector<int>::iterator iter;
        // for (iter = sp.getArr().begin(); iter != sp.getArr().end(); iter++)
        // {
        //     std::cout << *iter<< std::endl;
        // }
        // std::cout << "----\n";
        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
return 0;
}