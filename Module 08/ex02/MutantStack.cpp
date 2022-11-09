/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:47:51 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 01:06:31 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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
    return (container.back());
}

template <class T, class container_type>
const T& MutantStack<T, container_type>::top() const
{
    return (container.back());
}

template <class T,  class container_type>
typename T::size_type MutantStack<T, container_type>::size() const
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
