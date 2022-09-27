/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:21:42 by samajat           #+#    #+#             */
/*   Updated: 2022/09/27 14:26:36 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string    replaceLine(std::ofstream *rFile, std::string buff, std::string s1, std::string s2)
{
    std::string         replacedLine = "";
    int                 i;
    int                 s1Len;

    i = 0;
    s1Len = s1.length();
    while (buff[i])
    {
        if (buff.substr(i, s1Len) == s1)
        {
            (*rFile) << s2;
            i += s1Len - 1;
        }
        else
        {
            (*rFile) << buff[i];
        }
        i++;
    }
    return (replacedLine);
}


void    replaceText(std::ofstream *rFile, char **parm)
{
    std::ifstream   file;
    std::string     buff;
    std::string     text = "";

    file.open(parm[0], std::ios::in);
    if (!file)
    {
        std::cerr << "Failed to find the  file!" << std::endl;
        exit(1);
    }
    createAReFile(parm[0], rFile);
    while (getline(file, buff))
    {
        text += buff;
        if(!file.eof())
            text += "\n";
    }
    if (!text.length())
    {
        std::cerr << "File Is Empty!" << std::endl;   
        exit(1);
    }
    replaceLine(rFile, text, parm[1], parm[2]);
}


void    createAReFile(std::string file, std::ofstream *rFile)
{
    file += ".replace";
    rFile->open(file , std::ios::out);
    if (!(*rFile))
    {
        std::cerr << "Failed to create the replace file!" << std::endl;
        exit (1);
    }
}