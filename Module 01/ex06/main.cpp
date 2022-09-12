/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:52:46 by samajat           #+#    #+#             */
/*   Updated: 2022/09/12 12:01:20 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
    if(argc != 2)
    {
        std::cerr << "Please input valid args!" << std::endl;
        return (1);
    }
    Harl harl;

    harl.complain(argv[1]);
}