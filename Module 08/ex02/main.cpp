/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 20:11:32 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "MutantStack.hpp"

#include <vector>
#include <ostream>
#include <functional>
class x
{
    int a;
    public:
    x(int a){this->a=a;}
    int getX()const{return a;}
};
std::ostream& operator<<(std::ostream &COUT, const x& xc)
{
    COUT << xc.getX();
    return (COUT);
}
#include <iterator>
#include <iostream>
#include <deque>
#include <stack>

int main()
{
    std::stack<int> stack1;
    stack1.push(1);
    stack1.push(1);
    stack1.push(1);
    stack1.push(1);
    std::stack <int> stack(stack1);
    stack.push(2);
    stack.push(2);
    stack.push(2);
    stack.push(2);
    stack1 = stack;
    // stack.pop();
    // stack.pop();
    // std::cout << stack.size() << std::endl;
    while (!stack1.empty()) {
        std::cout << stack1.top() <<" ";
        stack1.pop();
    }
    std::cout << "\n----------\n";
    // while (!stack.empty()) {
    //     std::cout << stack.top() <<" ";
    //     stack.pop();
    // }
}