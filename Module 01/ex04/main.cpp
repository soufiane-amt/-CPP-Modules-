/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:56:42 by samajat           #+#    #+#             */
/*   Updated: 2022/09/03 17:08:36 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>



int main(int argc, char **argv)
{
    std::string outfile;

    outfile = argv[1] + ".replace";
    if (argc != 4)
        return (1);//Error
    
}