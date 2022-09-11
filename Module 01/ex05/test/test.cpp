/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:00:55 by samajat           #+#    #+#             */
/*   Updated: 2022/09/11 15:01:06 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



// #define  PTRMEMBER(object, ptrToMember) ((object).*(ptrToMember)) 
class Calc
{
    public:
    int add(int a, int b);
    int abstarct(int a, int b);
};

int Calc::add (int a, int b)
{
    return (a + b);
}
int Calc::abstarct (int a, int b)
{
    return (a - b);
}

typedef int (Calc::*CalMFunc)(int, int);
int main ()
{
    CalMFunc ptr[] = {&Calc::add, &Calc::abstarct};
    Calc c;
    // Calc a;
    std::cout << "Output is " << (c.*ptr[0])(2, 5) << std::endl;
    std::cout << "Output is " << (c.*ptr[1])(2, 5) << std::endl;
}