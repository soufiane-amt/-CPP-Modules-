/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 21:08:37 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stdexcept>


template <class T, class containerType=std::deque<T> >
class MutantStack
{
    containerType container;
    public:

    //Conanical Form
    explicit MutantStack(const containerType& ctnr = containerType());
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& copy);
    ~MutantStack();

    //Data manipulation functions
    bool empty() const;
    T& top();
    const T& top() const; 
    typename containerType::size_type size() const;
    void push (const T& val);
    
    // void emplace (typename Args&&... args);
    void pop();
    void swap (MutantStack& x);
    
    //Iterator
    template <class container=containerType>
    class iterator
    {
        private:
        container *ptr;
        
        public:
        iterator(container* pointer=0);
        iterator(const iterator& copy);
        iterator& operator=(const iterator& copy);
        iterator& operator++();
        iterator& operator++(int);
        iterator& operator--();
        iterator& operator--(int);
        ~iterator();
    };
    iterator begin();
    iterator end  ();
};


//Conanical Form

template <class T, class containerType>
MutantStack<T, containerType>::MutantStack(const containerType& s)
{
    container = s;
}

template <class T, class containerType>
MutantStack<T, containerType>::MutantStack(const MutantStack& copy)
{
    *this = copy;
}

template <class T, class containerType>
MutantStack<T, containerType>& MutantStack<T, containerType>::operator=(const MutantStack& copy)
{
   for (int i =  container.size() - 1; i >= 0; i--)
        this->push(copy.container[i]);
    return (*this);
}

template <class T, class containerType>
MutantStack<T, containerType>::~MutantStack()
{
}




template <class T, class containerType>
bool MutantStack<T, containerType>::empty() const
{
    return (container.empty());
}


template <class T, class containerType>
T& MutantStack<T, containerType>::top()
{
    return (container.back());
}

template <class T, class containerType>
const T& MutantStack<T, containerType>::top() const
{
    return (container.back());
}

template <class T,  class containerType>
typename containerType::size_type MutantStack<T, containerType>::size() const
{
    return(container.size());
}

template <class T, class containerType>
void MutantStack<T, containerType>::push (const T& val)
{
    container.push_back(val);
}

template <class T, class containerType>
void MutantStack<T, containerType>::pop()
{
    container.pop_back();
}

template <class T, class containerType>
void MutantStack<T, containerType>::swap (MutantStack& x)
{
    container.swap(x.container);
}


// template <class T, class containerType>
//  void MutantStack<T, containerType>::emplace (typename Args &&... args)
// {
    
// }

//Iterator
    
template <class T, class containerType>
typename MutantStack<T, containerType>::iterator MutantStack<T, containerType>::begin()
{
    return (iterator(&container));
}

template <class T, class containerType>
typename MutantStack<T, containerType>::iterator MutantStack<T, containerType>::end ()
{
    return (iterator(&container + container.size() - 1));
}


template <class T, class containerType>
template <class container>
typename MutantStack<T, containerType>::iterator::iterator(container* pointer):ptr(pointer)
{
    
}

template <class T, class containerType>
template <class container>
typename MutantStack<T, containerType>::iterator::iterator(const iterator& copy):ptr(copy.ptr)
{
}

template <class T, class containerType>
template <class container>
typename MutantStack<T, containerType>::iterator& MutantStack<T, containerType>::iterator::operator=(const iterator& copy)
{
    this->ptr = copy.ptr;
}

template <class T, class containerType>
template <class container>
typename MutantStack<T, containerType>::iterator::~iterator()
{
}

//

template <class T, class containerType>
template <class container>
typename MutantStack<T, containerType>::iterator& MutantStack<T, containerType>::iterator::operator++(int)
{
    ptr++;
    return (ptr - 1);
}

template <class T, class containerType>
typename MutantStack<T, containerType>::iterator& MutantStack<T, containerType>::iterator::operator++()
{
    ptr++;
    return (ptr);
}

template <class T, class containerType>
template <class container>
MutantStack<T, containerType>::iterator& MutantStack<T, containerType>::iterator::operator--(int)
{
    ptr--;
    return (ptr + 1);
}

template <class T, class containerType>
template <class container>
typename MutantStack<T, containerType>::iterator& MutantStack<T, containerType>::iterator::operator--()
{
    ptr--;
    return (ptr);
}


#endif