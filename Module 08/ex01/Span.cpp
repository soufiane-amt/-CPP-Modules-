/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:03:51 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 01:58:43 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size=0)
{
   if (!size)
        throw std::length_error("The size of span can't be 0!\n");
    this->size = size;
    arr = new int[size];
}

Span::Span(const Span& copy)
{
    arr = 0;
    (*this) =copy;
}

Span& Span::operator=(const Span& copy)
{
    if (arr)
        delete [] arr;
    arr = new int[copy.size];
    for (size_t i = 0; i < size; i++)
        arr[i] = copy.arr[i]; 
}

Span::~Span()
{
    delete [] arr;
}

void Span::addNumber(int n)
{
    static unsigned int i;

    if (size == i)
        throw std::out_of_range ("index range is overpassed\n");;
    arr[i] = n;
    i++;
}

int Span::shortestSpan()
{
    return(compareWith(isSmaller));
}

int Span::longestSpan()
{
    
}

int Span::compareWith(bool (*func)(int a, int b))
{
    int smallestNbr = arr[0];
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            int s = abs(arr[i] - arr[j]);
            func(a, b) ? smallestNbr = s : NULL;
        }
    }
}



//UTILS
bool isSmaller(int a, int b){return (a < b);}


bool isLarger(int a, int b){return (a > b);}