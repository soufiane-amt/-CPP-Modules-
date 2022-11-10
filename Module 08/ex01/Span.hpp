/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:51:48 by samajat           #+#    #+#             */
/*   Updated: 2022/11/11 00:11:18 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <stdexcept>
#include <vector>
#include <iterator>

typedef std::vector<int> container;
class Span
{
    public:

    Span(unsigned int size=0);
    Span(const Span& copy);
    Span& operator=(const Span& copy);
    ~Span();
    const container &getArr();
    void addNumber(int n);
    void addNumbers(size_t len, int *numbers);
    int shortestSpan();
    int longestSpan();
    int compareWith(bool (*func)(int a, int b));

    private:
    container arr;
    unsigned int size;

};

#endif