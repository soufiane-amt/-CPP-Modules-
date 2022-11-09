/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 01:38:38 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack <int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
       
    stack.pop();
    stack.pop();
   
    while (!stack.empty()) {
        std::cout << stack.top() <<" ";
        stack.pop();
    }
}