/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceUtils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:21:42 by samajat           #+#    #+#             */
/*   Updated: 2022/09/04 19:02:19 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    createAReFile(std::string file, std::ofstream *rFile)
{
    file += ".replace";
    rFile->open(file , std::ios::out | std::ios::app);
    if (!rFile)
    {
        std::cerr << "Failed to create the replace file!" << std::endl;
        exit (1);
    }
}

std::string    replaceLine(std::string buff, std::string s1, std::string s2)
{
    if (buff.find(s1) == -1)
        return (0);
    
}

void    replaceText(std::ofstream *rFile, char **parm)
{
    std::ifstream   file;
    std::string     buff;

    file.open(parm[0], std::ios::in);
    if (!file)
    {
        std::cerr << "Failed to find the  file!" << std::endl;
        exit(1);
    }
    while (getline(file, buff))
    {
        
    }
}