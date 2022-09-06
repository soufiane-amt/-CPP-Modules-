/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceUtils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:21:42 by samajat           #+#    #+#             */
/*   Updated: 2022/09/06 15:47:55 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}


std::string    replaceLine(std::string buff,  std::string s1,  std::string s2)
{
    std::string         replacedLine = "";
    static std::string  partOfPrLine = "";
    int                 i;
    int                 s1Len;

    

    
    i = 0;
    s1Len = s1.length();
    while (buff[i])
    {
        if (buff.substr(i, s1Len) == s1)
        {
            // std::cout << buff.substr(i, s1Len) << std::endl;
            replacedLine += s2;
            i += s1Len - 1;
        }
        else
        {
            // std::cout << buff.substr(i, s1Len) << std::endl;
            replacedLine += buff[i];
        }
        i++;
    }
    return (replacedLine);
}


void    replaceText(std::ofstream *rFile, char **parm)
{
    std::ifstream   file;
    std::string buff;
    std::firstLine;

    file.open(parm[0], std::ios::in);
    if (!file)
    {
        std::cerr << "Failed to find the  file!" << std::endl;
        exit(1);
    }
    if (!getline(file, firstLine))
    {
        std::cerr << "No lines in text." << std::endl;
        return ;
    }
    while (getline(file, buff))
    {
        (*rFile) << replaceLine(buff + firstLine, parm[1], parm[2]) << std::endl;
        firstLine = "";
    }
}

void    createAReFile(std::string file, std::ofstream *rFile)
{
    file += ".replace";
    rFile->open(file , std::ios::out);
    if (!rFile)
    {
        std::cerr << "Failed to create the replace file!" << std::endl;
        exit (1);
    }
}