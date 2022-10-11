/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:55:45 by samajat           #+#    #+#             */
/*   Updated: 2022/10/11 19:58:57 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

// Headers
#include <iostream>
#include <stdint.h> 

struct Data
{
    int member;
};


uintptr_t serialize(Data* ptr);
Data*     deserialize(uintptr_t raw);

#endif