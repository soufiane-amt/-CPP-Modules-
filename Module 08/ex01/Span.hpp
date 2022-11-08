/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:51:48 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 19:27:28 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <stdexcept>
#include <vector>
#include <iterator>
class Span
{
    private:
    std::vector<int> arr;
    unsigned int size;

    public:
    Span(unsigned int size=0);
    Span(const Span& copy);
    Span& operator=(const Span& copy);
    ~Span();
    std::vector<int> &getArr();
    void addNumber(int n);
    void addNumbers(int *numbers);
    int shortestSpan();
    int longestSpan();
    int compareWith(bool (*func)(int a, int b));
};

#endif