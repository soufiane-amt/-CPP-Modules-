/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:32:21 by samajat           #+#    #+#             */
/*   Updated: 2022/09/05 16:01:29 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp" 

int main(int argc, char **argv)
{
    std::ofstream     *rFile = new std::ofstream;
    
    if (argc != 4)
        return (1);
    createAReFile(argv[1], rFile);
    replaceText(rFile, argv + 1);
}