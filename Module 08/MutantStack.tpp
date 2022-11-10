/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:47:51 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 15:47:53 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <class T, class containerType>
MutantStack<T, containerType>::MutantStack(const containerType& s)
{
    (void)s;
}

// template <class T, class containerType>
// MutantStack<T, containerType>::MutantStack(const MutantStack& copy)
// {
//     (void)copy;
// }

template <class T, class containerType>
MutantStack<T, containerType>& MutantStack<T, containerType>::operator=(const MutantStack& copy)
{
    (void)copy;

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

// template <class T, class containerType>
// void MutantStack<T, containerType>::swap (MutantStack& x) noexcept
// {
//     container.swap(x.container);
// }

// template <class T, class containerType>
//  void MutantStack<T, containerType>::emplace (typename Args &&... args)
// {
    
// }
