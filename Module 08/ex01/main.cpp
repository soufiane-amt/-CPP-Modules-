/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:04:17 by samajat           #+#    #+#             */
/*   Updated: 2022/11/11 00:14:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define SIZE 10000
int main()
{
    try
    {
        Span sp = Span(SIZE);
        for (size_t i = 0; i < SIZE; i++)
            sp.addNumber(12);
        for (std::vector<int>::const_iterator i = sp.getContainer().cbegin(); i != sp.getContainer().cend(); i++)
        {
            
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
return 0;
}