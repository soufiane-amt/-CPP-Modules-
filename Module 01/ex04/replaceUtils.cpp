/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceUtils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:21:42 by samajat           #+#    #+#             */
/*   Updated: 2022/09/04 21:40:50 by samajat          ###   ########.fr       */
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

std::string    replaceLine(char *buff, std::string s1, std::string s2)
{
    std::string replacedLine = "";
    int         i;
    int         s1Len;

    i = 0;
    s1Len = s1.length();
    if (buff.find(s1) == -1)
        return (0);
    while (buff[i])
    {
        if (!ft_strcmp(buff + i, s1))
        {
            replacedLine += s2;
            i += s1Len - 1;
        }
        else
        {
            replacedLine += buff[i];
        }
        i++;
    }
    return (replacedLine);
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