/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:16:01 by samajat           #+#    #+#             */
/*   Updated: 2022/10/12 16:17:21 by samajat          ###   ########.fr       */
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
    print (45);
    print ("hello");
    print ('a');
    print (45.45);
}