/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:04:17 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 20:40:13 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define SIZE 1000
int main()
{
Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
sp.addNumbers((int[]){6, 3});
// std::vector<int>::iterator iter;
// int element = 0;
//     std::cout << "-----\n";
// for (iter = sp.getArr().begin(); iter != sp.getArr().end(); iter++)
// {
//     sp.addNumber(element);
//     element++;
// }

std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}