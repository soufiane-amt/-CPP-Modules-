/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:26:10 by samajat           #+#    #+#             */
/*   Updated: 2022/10/13 14:05:52 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array()
{
    arr = new T();
}

template<class T>
Array<T>::Array(unsigned int l) :len(l)
{
    arr = new T[len];
}

template<class T>
Array<T>::Array(const Array &copy)
{
    static int o = 0;

    o++;
    this->len = copy.len;
    std::cout <<  "---" <<   std::endl;
    for (size_t i = 0; i < len; i++)
    {
        this->arr[i] = copy.arr[i];
        std::cout << o << std::endl;
    }
}

template<class T>
Array<T>& Array<T>::operator=(const Array &copy)
{
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
    if (len - 1 < i)
        throw std::exception ();
    return (arr[i]);
}

template<class T>
Array<T>::~Array()
{
    delete [] arr;
}

#define MAX_VAL 7
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}