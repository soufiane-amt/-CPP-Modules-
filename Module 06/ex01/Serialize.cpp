/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:55:13 by samajat           #+#    #+#             */
/*   Updated: 2022/10/11 20:11:23 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t serialValue = reinterpret_cast<uintptr_t>(ptr);
    return (serialValue);
}

Data*     deserialize(uintptr_t raw)
{
    Data* deserialValue = reinterpret_cast<Data*>(raw);
    
    return (deserialValue);
}
