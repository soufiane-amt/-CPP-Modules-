/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/10 17:19:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// #include <vector>
// #include <ostream>
// #include <functional>
// class x
// {
//     int a;
//     public:
//     x(int a){this->a=a;}
//     int getX()const{return a;}
// };
// std::ostream& operator<<(std::ostream &COUT, const x& xc)
// {
//     COUT << xc.getX();
//     return (COUT);
// }
// #include <iterator>
// #include <iostream>
// #include <deque>
// #include <stack>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    std::cout << mstack.size() << std::endl;
    // //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}