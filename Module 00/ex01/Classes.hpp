/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:19:24 by samajat           #+#    #+#             */
/*   Updated: 2022/08/27 12:39:23 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP

//Headers
#include "iostream"
#include "string"
//Classes
class Contact
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        void    field_err_checker(std :: string info, std :: string field_name);
}


class MyPhoneBook
{
    public:
        Contact contacts[8];
        void    add_new_contact(void);
        void    search (void);
        bool     exitProgram;
        exitProgram = false;
}
