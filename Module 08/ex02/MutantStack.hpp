/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 01:06:16 by samajat          ###   ########.fr       */
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
    typename T::size_type size() const;
    void push (const T& val);
    void emplace (Args&&... args);
    void pop();
    void swap (stack& x) noexcept
};


#endif