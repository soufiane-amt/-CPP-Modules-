/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:30:39 by samajat           #+#    #+#             */
/*   Updated: 2022/11/07 19:03:48 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
#define ARRAY

//Header
#include <iostream>

//classes
template<class T>
class Array
{
    T            *arr;
    unsigned int len;

    public:
    Array();
    Array(unsigned int l);
    Array(const Array &copy);
    Array &operator=(const Array &copy);
    T& operator[](unsigned int i);
    unsigned int size();
    ~Array();
};


template<class T>
Array<T>::Array():arr(NULL), len(0)
{
}

template<class T>
Array<T>::Array(unsigned int l) :len(l)
{
    arr = new T[len];
}

template<class T>
Array<T>::Array(const Array &copy)
{
    this->len = copy.len;
    arr = new T[len];
    (*this) = copy;
}

template<class T>
Array<T>& Array<T>::operator=(const Array &copy)
{
    len = copy.len;
    if (arr)
        delete[]arr;
    arr = new T[len];
    for (size_t i = 0; i < len; i++)
        this->arr[i] = copy.arr[i];
    return (*this);
}

template<class T>
unsigned int Array<T>::size()
{
    return (len);
}

template<class T>
T& Array<T>::operator[](unsigned int i)
{
    if (len <= i)
        throw std::exception ();
    return (arr[i]);
}

template<class T>
Array<T>::~Array()
{
    if (arr)
        delete [] arr;
}

#endif