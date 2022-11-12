/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/12 01:31:00 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void subjectTest()
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

    for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
    {
       std::cout << mstack.top() << std::endl;
        mstack.pop();
    }
    std::stack<int> s(mstack);
}

void testConstIterator()
{
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
}

void  testReverseIter ()
{
    {
    std::cout << " ----In case the iterator Object is reverse ---\n";
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    MutantStack<int>::reverse_iterator it ;
    for (it = mstack.rbegin(); it!= mstack.rend(); it++)
      std::cout << *it << std::endl;
    
    }
    {
    std::cout << " ----In case the iterator Object is reverse const  ---\n";
    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    const MutantStack<int> mstack(d);
    MutantStack<int>::const_reverse_iterator it = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator ite = mstack.crend();

    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    }
}
void  copyAssignmentTest()
{
    std::cout << "----------Test the assignment operator\n";
    MutantStack <int> l;
    l.push(42);  
    l.push(2);  
    l.push(12);  
    l.push(32);
    MutantStack <int> d;
    d = l;
    d.push(100);  
    d.push(3200);
    size_t le = d.size();
    for (size_t i = 0; i < le; i++)
    {
      std::cout << d.top() << std::endl;
      d.pop();
    }
}

void copyConst()
{
      std::cout << "----------Test the copy constructor\n";
      MutantStack<int> s1;
      s1.push(1);  
      s1.push(2);  
      s1.push(3);  
      s1.push(4);  
      s1.push(5);
      MutantStack<int> s2(s1);
      size_t le = s2.size();
      for (size_t i = 0; i < le; i++)
      {
        std::cout << s2.top() << std::endl;
        s2.pop();
      }
}

void parameterizedConst()
{
      std::cout << "----------Test the parametrized constructor\n";
      std::deque <int> d;
      d.push_back(1337);
      d.push_back(42);
      MutantStack<int> s1(d);
      
      size_t le = s1.size();
      for (size_t i = 0; i < le; i++)
      {
        std::cout << s1.top() << std::endl;
        s1.pop();
      }
}
void replacingMSWithList()
{
      std::cout << "\n---The subject required test replace the Mutantstack with a list type + updating all its functions\n";
      std::list<int> mstack;
      mstack.push_back(5);
      mstack.push_back(17);
      std::cout << mstack.back() << std::endl;
      mstack.pop_back();
      std::cout << mstack.size() << std::endl;
      mstack.push_back(3);
      mstack.push_back(5);
      mstack.push_back(737);
      //[...]
      mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
      ++it;
      --it;
      while (it != ite)
      {
      std::cout << *it << std::endl;
      ++it;
      }
      mstack.push_back(33);
      mstack.push_back(52);
      mstack.push_back(37);
}
int main()
{
    subjectTest();
    testConstIterator();    
    testReverseIter();
    copyAssignmentTest();
    copyConst();
    parameterizedConst();
    replacingMSWithList();
    return 0;
}

