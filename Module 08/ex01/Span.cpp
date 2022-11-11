/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:03:51 by samajat           #+#    #+#             */
/*   Updated: 2022/11/11 23:29:20 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int s):size(s){}

Span::Span(const Span& copy)
{
    (*this) = copy;
}

Span& Span::operator=(const Span& copy)
{
    if(size)
        arr.erase(arr.begin(), arr.end());
    this->size = copy.size;
    for (size_t i = 0; i < size; i++)
        arr.push_back(copy.arr[i]);
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (size <= arr.size())
        throw std::out_of_range ("index range is overpassed / equals to 0\n");
    arr.push_back(n);
}


//ADD >>NUMBERS<<
void Span::addNumbers(size_t len, int *numbers)
{    
    if (len + arr.size() <= this->size)
    {
        std::vector <int> arr(numbers, numbers + len);
        for (std::vector <int>::iterator i = arr.begin(); i != arr.end(); i++)
            addNumber(*i);
    }
    else
        throw std::length_error("addNumbers<ERROR>The size of the numbers passed overlows the span array!\n");
}

int Span::shortestSpan()
{
    if (arr.size() < 2)
        throw std::exception();
    int shortest = arr[0];
    for (size_t i = 0; i < size - 1; i++)
        for (size_t j = i + 1; j < size; j++)
        {
            int diff = abs(arr[i] - arr[j]);
            diff < shortest ? shortest = diff : NULL;
        }
    return (shortest);
}

int Span::longestSpan()
{
    if (arr.size() < 2)
        throw std::exception();
    int smallest = *min_element(arr.begin(), arr.end());
    int largest = *max_element(arr.begin(), arr.end());
    return(largest - smallest);
}


const container& Span::getContainer()
{
    return (arr);
}
