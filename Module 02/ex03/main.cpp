/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:24:25 by samajat           #+#    #+#             */
/*   Updated: 2022/09/21 21:47:19 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
Fixed foo(float f)
{
    Fixed b(f);
    return b;
}
int main ()
{
   
    // Fixed a = 1;//Fixed a(3.5f)
    // Fixed b = 3;// Fixed aa(a)
    // Fixed c = 15;//// Fixed c(3.5f)
    // Fixed res;
    // // // res  = (a + b + c) / a;
    
    // res = a / b;
    // std::cout << res << std::endl;
    // std::cout << sqrt(a.toFloat()) << std::endl;
    Point a(4, 5);
    Point b(1, 2);
    Point c(10, 4);
    Point e(3, 4);//(4.4945873867571, 4.8006251799493)
    
    bsp(a, b, c, e);
    
}