/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:20:19 by samajat           #+#    #+#             */
/*   Updated: 2022/08/26 21:18:02 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

void    Contact :: field_err_checker(std :: string info, std :: string field_name)
{
    std :: string error_message;

    error_message = " field is empty please enter a valid input."
    if (info.empty())
        std :: cerr << "The " << field_name << error_message;
}

void    MyPhoneBook :: add_new_contact (void)
{
    Contact new_contact;    

    std :: cout << "Adding new contact ..."<< std::endln;
    std :: cout << "First Name:";
    new_contact.first_name << std :: cin;
    new_contact.fieled_err(new_contact.first_name, "First Name")
    std :: cout << "Last Name:";
    new_contact.last_name << std :: cin;
    new_contact.fieled_err(new_contact.last_name, "Last Name")
    std :: cout << "Nickname:";
    new_contact.nickname << std :: cin;
    new_contact.fieled_err(new_contact.nickname, "Nickname")
    std :: cout << "Phone number:";
    new_contact.phone_number << std :: cin;
    new_contact.fieled_err(new_contact.phone_number, "Phone number")
    std :: cout << "Darkest secret:";
    new_contact.darkest_secret << std :: cin;
    new_contact.fieled_err(new_contact.darkest_secret, "Darkest secret")
}


int main ()
{
    
}