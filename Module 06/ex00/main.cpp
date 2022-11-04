/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:59:47 by samajat           #+#    #+#             */
/*   Updated: 2022/11/04 18:40:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Invalid argment!" << std::endl;
        return (1);
    }
    Convert c(argv[1]);
    c.displayConversions();
}