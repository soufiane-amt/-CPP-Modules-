/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:00:55 by samajat           #+#    #+#             */
/*   Updated: 2022/09/09 21:13:21 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int add (int a, int b)
{
    return (a + b);
}

void hello(void)
{
    std::cout << "hello ";
}

void world(void)
{
    std::cout << "world " << std::endl;
}

int real()
{
    return (1 == 5 || 5 ==5);
}
int main ()
{
    void (*functptr[])()  = {hello, world};
    functptr[0]();
    functptr[1]();
    
    std::cout << real();
}