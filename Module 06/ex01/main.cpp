/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:11:47 by samajat           #+#    #+#             */
/*   Updated: 2022/10/11 20:23:16 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data *data = new Data;
    Data *data2 = new Data;
    

    data->member = 100;
    data2->member = 100;
    std::cout << serialize(data) << std::endl;
    std::cout << deserialize(serialize(data)) << std::endl;
    if (data == deserialize(serialize(data)))
        std::cout << "Their are equals !" << std::endl;
    else
        std::cout << "They aren't equal!" << std::endl;

    if (data2 == deserialize(serialize(data)))
        std::cout << "Their are equals !" << std::endl;
    else
        std::cout << "They aren't equal!" << std::endl;
    
    delete data;
    delete data2;
}