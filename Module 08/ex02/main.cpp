/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 17:26:26 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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
void    func()
{
    std::cout << "hello world\n";
}
void    func1()
{
    std::cout << "helhilo\n";
}

int main()
{
    MutantStack <int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
       
    // stack.pop();
    // stack.pop();
    std::cout << stack.size() << std::endl;
    while (!stack.empty()) {
        std::cout << stack.top() <<" ";
        stack.pop();
    }
}