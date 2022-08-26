/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:20:19 by samajat           #+#    #+#             */
/*   Updated: 2022/08/26 22:51:48 by samajat          ###   ########.fr       */
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
    new_contact.fieled_err(new_contact.first_name, "First Name");
    std :: cout << "Last Name:";
    new_contact.last_name << std :: cin;
    new_contact.fieled_err(new_contact.last_name, "Last Name");
    std :: cout << "Nickname:";
    new_contact.nickname << std :: cin;
    new_contact.fieled_err(new_contact.nickname, "Nickname");
    std :: cout << "Phone number:";
    new_contact.phone_number << std :: cin;
    new_contact.fieled_err(new_contact.phone_number, "Phone number");
    std :: cout << "Darkest secret:";
    new_contact.darkest_secret << std :: cin;
    new_contact.fieled_err(new_contact.darkest_secret, "Darkest secret");
}

// ◦Display the saved contacts as a list of 4 columns: index, first name, last
// name and nickname
// Each column must be 10 characters wide. A pipe character (’|’) separates
// them. The text must be right-aligned. If the text is longer than the column,
// it must be truncated and the last displayable character must be replaced by a
// dot (’.’).
std::string    str_processor(std::string str)
{
    int j;

    j = 0;
    if (str.length() > 10)
    {
        str[9] = '.';
        return str.substr(0, 10);   
    }
    while (j < 10 - str.length())
    {
        str += " ";
        j++;
    }
    return (str + "|");
}

void    display_contacts_info(Contact contacts[])
{
    int i;

    i = 0;
    while (i < contacts.length())
    {
        std::cout << str_processor(to_string(i)) << str_processor(to_string(contacts[i].first_name))\
        str_processor(to_string(contacts[i].last_name)) << str_processor(to_string(contacts[i].nickname))\
        << std::endl;
        i++;
    }
}

void    MyPhoneBook::search (void)
{
    size_t index;

    display_contacts_info(this.contacts);
    std :: cout << "Please choose an index:";
    index << std :: cin;
    while (index > this->contacts.length() - 1)//exit
        std::cerr << "The index is not valid please try again." << std ::endl;
    //display func
    
}

int main ()
{
    
}