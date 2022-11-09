/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 19:32:32 by samajat          ###   ########.fr       */
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
#include <vector>
#include <list>

int main()
{
    // MutantStack <int> stack;
    // stack.push(21);
    // stack.push(22);
    // stack.push(24);
    // stack.push(25);
       
    // stack.pop();
    // stack.pop();
    // std::cout << stack.size() << std::endl;
    // while (!stack.empty()) {
    //     std::cout << stack.top() <<" ";
    //     stack.pop();
    // }
    std::vector <int> s;
    s.push_back(21);
    // s.push_back(22);
    // s.push_back(24);
    // s.push_back(25);
    std::vector <int> *pt = &s;
    std::vector < int > ::iterator iter(pt);
    // iter  = pt->begin();
    // std::vector < int > ::iterator iter1(iter);
    // iter1 = iter;
    std::cout << (*iter)++ << std::endl;
    // std::cout << *iter1 << std::endl;
    // for (iter  = pt->begin() ; iter != pt->end(); iter++)
    // {
    //     std::cout << *iter << std::endl;
    // }
    
}