/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:00:55 by samajat           #+#    #+#             */
/*   Updated: 2022/09/10 18:06:42 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



class Calc
{
    public:
    Calc();
    int add(int a, int b);
    int (Calc::funcPtr*)(int, int);
}

Calc::Calc()
{

}

int add (int a, int b)
{
    return (a + b);
}

int main ()
{
    // int (*ptrFunc)(int, int);
    // ptrFunc = &add;
    // std::cout << ptrFunc(10, 10) << std::endl;
    Calc c;

    c.
}