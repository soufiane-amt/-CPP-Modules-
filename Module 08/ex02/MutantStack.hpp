/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 00:46:59 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>

template <class T, class container_type=std::deque<T>>
class MutantStack
{
    container_type container;
    
    public:
    //Conanical Form
    explicit MutantStack(const container_type& ctnr = container_type());
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& copy);
    ~MutantStack();

    //Data manipulation functions
    bool empty() const;
    T& top();
    const T& top() const;
    T size() const;
    void push (const T& val);
    void emplace (Args&&... args);
    void pop();
    void swap (stack& x) noexcept
};


template <class T, class container_type>
MutantStack<T, container_type>::MutantStack(const container_type& ctnr)
{
    
}

template <class T, class container_type>
MutantStack<T, container_type>::MutantStack(const MutantStack& copy)
{
    
}

template <class T, class container_type>
MutantStack<T, container_type>& MutantStack<T, container_type>::operator=(const MutantStack& copy)
{
    
}

template <class T, class container_type>
MutantStack<T, container_type>::~MutantStack()
{
    
}

template <class T, class container_type>
bool MutantStack<T, container_type>::empty() const
{
    return (container.empty());
}
template <class T, class container_type>
T& MutantStack<T, container_type>::top()
{
    
}

template <class T, class container_type>
const T& MutantStack<T, container_type>::top() const
{
    
}

template <class T, class container_type>
T MutantStack<T, container_type>::size() const
{
    
}

template <class T, class container_type>
void MutantStack<T, container_type>::push (const T& val)
{
    
}

template <class T, class container_type>
void MutantStack<T, container_type>::pop()
{
    
}

template <class T, class container_type>
void MutantStack<T, container_type>::swap (stack& x) noexcept
{
    
}

template <class T, class container_type>
 void MutantStack<T, container_type>::emplace (Args&&... args)
{
    
}

#endif