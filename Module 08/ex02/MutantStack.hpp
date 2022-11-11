/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/11 23:41:01 by samajat          ###   ########.fr       */
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

    typedef typename containerType::reverse_iterator reverse_iterator;
    reverse_iterator  rbegin()const;
    reverse_iterator  rend  ()const;
    
    typedef typename containerType::const_reverse_iterator const_reverse_iterator;
    const_reverse_iterator  crbegin()const;
    const_reverse_iterator  crend  ()const;
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
   for ( int i = 0; i < copy.c.size(); i++)
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

// const Iterator
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

//Reverse iterator

template <class T , class containerType>
typename containerType::reverse_iterator MutantStack<T, containerType>::rbegin()const
{
    return (this->c.rbegin());
}

template <class T , class containerType>
typename containerType::reverse_iterator MutantStack<T, containerType>::rend ()const
{
    return (this->c.rend());
}


//const Reverse iterator

template <class T , class containerType>
typename containerType::const_reverse_iterator MutantStack<T, containerType>::crbegin()const
{
    return (this->c.crbegin());
}

template <class T , class containerType>
typename containerType::const_reverse_iterator MutantStack<T, containerType>::crend ()const
{
    return (this->c.crend());
}



#endif