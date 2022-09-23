/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:22:46 by samajat           #+#    #+#             */
/*   Updated: 2022/09/23 20:08:21 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"


int  onlyWhiteSpace(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] == ' ' ||str[i] == '\t' ||str[i] == '\r' || str[i] == '\f' || str[i] == '\v'))
            return (0);
        i++;
    }
    return (1);
}

bool isNumber(std::string s) 
{
    if(s.size()== 0)
        return false;
    for(int i=0 ; i < (int)s.length() ; i++) {
        if((s[i]>='0' && s[i]<='9') == false)
        {
            return false;
        }
    }
    return true;
}

void    printErrMessage(std :: string field_name)
{
    std :: cerr << "The " << field_name << " field is empty please enter a valid input.\n" << field_name << std::endl;
}

std::string    getInput(std :: string field_name)
{
    std::string data;

    while(std::getline(std::cin, data))
    {
        if (data.empty() || onlyWhiteSpace(data))
            printErrMessage(field_name);
        else
            return (data);
    }
    exit(1);
}

