/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/11 01:27:37 by samajat          ###   ########.fr       */
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
    MutantStack(const containerType& ctnr = containerType());
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& copy);
    ~MutantStack();

    typedef typename containerType::iterator iterator;
    iterator  begin();
    iterator  end  ();

    typedef typename containerType::const_iterator const_iterator;
    const_iterator  cbegin()const;
    const_iterator  cend  ()const;
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
        this->push(copy.c[i]);
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

template <class T , class containerType>
typename containerType::const_iterator MutantStack<T, containerType>::cbegin()const
{
    return (this->c.cbegin());
}

template <class T , class containerType>
typename containerType::const_iterator MutantStack<T, containerType>::cend ()const
{
    return (this->c.cend());
}




#endif