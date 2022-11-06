/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:16:01 by samajat           #+#    #+#             */
/*   Updated: 2022/11/06 18:53:34 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

//funcs
void   print (T a)
{
    std::cout << a << std::endl;
}

int main ()
{
    // // int *ptr = new int[2]();
    // // for (size_t i = 0; i < 2; i++)
    // //     std::cout << ptr[i]<< std::endl;    
    // int *a = new int[0];
    // std::cout << *a << std::endl;
    // unsigned int a = (unsigned int)4294967297;
    // std::cout << a << std::endl;
    int *arr = new int [100];
    for (size_t i = 0; i < 100; i++)
    {
       std::cout << arr[i] << std::endl;
    }
    
}