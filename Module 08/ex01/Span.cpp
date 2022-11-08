/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:03:51 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 18:13:09 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int s):size(s)
{
   if (!size)
        throw std::length_error("The size of span can't be 0!\n");
}

Span::Span(const Span& copy):size(copy.size)
{
    (*this) = copy;
}

Span& Span::operator=(const Span& copy)
{
    arr.erase(arr.begin(), arr.end());
    for (size_t i = 0; i < size; i++)
        arr.push_back(copy.arr[i]);
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    static unsigned int i;

    if (size == i)
        throw std::out_of_range ("index range is overpassed\n");;
    arr[i] = n;
    i++;
}

bool isSmaller(int a, int b){return (a < b);}
bool isLarger(int a, int b){return (a > b);}

int Span::shortestSpan()
{
    return(compareWith(isSmaller));
}

int Span::longestSpan()
{
    return(abs(min_element(arr)));
}

int Span::compareWith(bool (*func)(int a, int b))
{
    int targetSpan = arr[0];
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            int diff = abs(arr[i] - arr[j]);
            func(diff, targetSpan) ? targetSpan = diff : NULL;
        }
    }
    return (targetSpan);
}



//UTILS