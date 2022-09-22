/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:24:25 by samajat           #+#    #+#             */
/*   Updated: 2022/09/22 14:06:49 by samajat          ###   ########.fr       */
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
    Point a(3, 6);
    Point b(2, 3);
    Point c(9, 3);
    Point e(6.035188607246f, 4.8556356988436f);//(4.4945873867571, 4.8006251799493)
    
    bsp(a, b, c, e);
    
}