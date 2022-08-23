/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:58:45 by samajat           #+#    #+#             */
/*   Updated: 2022/08/23 17:19:23 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstring>

void    str_to_upper(char   *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
}

int main (int argc, const char *argv[])
{
    int i;

    if (argc == 1)
    {
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
         return (1);
    }
    i = 1;
    while (argv[i])
    {
        str_to_upper((char *)argv[i]);
        i++;
    }
    return (0);
}