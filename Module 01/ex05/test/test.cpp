/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:00:55 by samajat           #+#    #+#             */
/*   Updated: 2022/09/11 15:34:39 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Calc
{
    public:
    int addFourNbr(int a, int b, int c, int d)
    int abstarct(int a, int b);
};

int Calc::addFourNbr(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

typedef int (*addPtr)(int, int, int, int);


int main()
{
    int (Calc::*addFourNbrPtr)(int, int, int, int);
    int (*addFour3joula) (int, int , int, int);

    addFourNbrPtr = &addFourNbr;
    std::cout << addFourNbrPtr(1, 1, 1, 1) << std::endl;

    //--------------
    addPtr ptr;

    ptr = &addFourNbr;
    std::cout << ptr(1, 1, 1, 1) << std::endl;
}
// typedef struct t_time
// {
//   //....
//   ///...
//   //...  
// };
// // #define  PTRMEMBER(object, ptrToMember) ((object).*(ptrToMember)) 
// int Calc::add (int a, int b)
// {
//     return (a + b);
// }
// int Calc::abstarct (int a, int b)
// {
//     return (a - b);
// }

// typedef int (Calc::*CalMFunc)(int, int);
// int main ()
// {
//     CalMFunc ptr[] = {&Calc::add, &Calc::abstarct};
//     Calc c;
//     // Calc a;
//     std::cout << "Output is " << (c.*ptr[0])(2, 5) << std::endl;
//     std::cout << "Output is " << (c.*ptr[1])(2, 5) << std::endl;
// }