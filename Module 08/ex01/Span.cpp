/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:03:51 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 20:40:58 by samajat          ###   ########.fr       */
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
        throw std::out_of_range ("index range is overpassed\n");
    arr.push_back(n);
    i++;
}
//ADD >>NUMBERS<<


void Span::addNumbers(int *numbers)
{
    if (sizeof(numbers)/sizeof(numbers[0]))
        arr.insert(arr.end(), numbers, numbers + sizeof(numbers)/sizeof(numbers[0]));
}

int Span::shortestSpan()
{
    int shortest = arr[0];
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            int diff = abs(arr[i] - arr[j]);
            diff < shortest ? shortest = diff : NULL;
        }
    }
    return (shortest);
}

int Span::longestSpan()
{
    int smallest = *min_element(arr.begin(), arr.end());
    int largest = *max_element(arr.begin(), arr.end());
    return(largest - smallest);
}


std::vector<int>& Span::getArr()
{
    return (arr);
}
