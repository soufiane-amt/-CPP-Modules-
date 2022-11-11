/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/11 01:08:28 by samajat          ###   ########.fr       */
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
    //[...]
    mstack.push(0);
    MutantStack<int>::const_iterator it = mstack.cbegin();
    MutantStack<int>::const_iterator ite = mstack.cend();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    mstack.push(33);
    mstack.push(52);
    mstack.push(37);

    std::cout << "---More tests---\n";
    //Better tests
    for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
    {
       std::cout << mstack.top() << std::endl;
        mstack.pop();
    }
    std::stack<int> s(mstack);

    }
    std::cout << " ----In case the Object is const qualified---\n";
    std::deque<int> d(20, 1337);
    const MutantStack<int> mstack(d);
    MutantStack<int>::const_iterator it = mstack.cbegin();
    MutantStack<int>::const_iterator ite = mstack.cend();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    return 0;
}