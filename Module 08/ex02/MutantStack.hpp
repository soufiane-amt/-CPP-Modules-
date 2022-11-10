/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/10 17:19:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stdexcept>
#include <stack>

template <class T , class containerType=std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
    //Conanical Form
    explicit MutantStack(const containerType& ctnr = containerType());
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& copy);
    ~MutantStack();

    typedef typename containerType::iterator iterator;
    iterator  begin();
    iterator  end  ();
};


//Conanical Form

template <class T , class containerType>
MutantStack<T, containerType>::MutantStack(const containerType& s)
{
    this->c = s;
}

template <class T , class containerType>
MutantStack<T, containerType>::MutantStack(const MutantStack& copy)
{
    *this = copy;
}

template <class T , class containerType>
MutantStack<T, containerType>& MutantStack<T, containerType>::operator=(const MutantStack& copy)
{
   for (int i =  this->c.size() - 1; i >= 0; i--)
        this->push(copy.container[i]);
    return (*this);
}

template <class T , class containerType>
MutantStack<T, containerType>::~MutantStack()
{
}


// Iterator
    
template <class T , class containerType>
typename containerType::iterator MutantStack<T, containerType>::begin()
{
    return (this->c.begin());
}

template <class T , class containerType>
typename containerType::iterator MutantStack<T, containerType>::end ()
{
    return (this->c.end());
}




#endif