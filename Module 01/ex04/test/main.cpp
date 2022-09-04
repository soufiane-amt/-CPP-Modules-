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

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}


std::string    replaceLine(char *buff, std::string s1, std::string s2)
{
    std::string replacedLine = "";
    int         i;
    int         s1Len;

    i = 0;
    s1Len = s1.length();
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

int main(int argc, char **argv)
{
    std::string buff = "Hello world !";

    std::string a = "wor";
    std::string b = "n";
    std::cout << replaceLine(buff, a, b) << std::endl;
}
