 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:31:43 by samajat           #+#    #+#             */
/*   Updated: 2022/09/04 18:55:15 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}


std::string    soul(char *buff, std::string s1, std::string s2)
{
    std::string replacedLine = "";
    int         i;
    int         s1Len;

    i = 0;
    s1Len = s1.length();
    while (buff[i])
    {
        // std::cout << (std::string)(buff + i) << "\n";
        if (strncmp(s1, buff + i, s1Len))
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

int main(int argc, char **argv)
{
    char *buff = new char(12);

    strcpy(buff, "hello world");
    std::string a = "wor";
    std::string b = "n";
    std::string c = soul(buff, a, b);
    std::cout << c << std::endl;
}
