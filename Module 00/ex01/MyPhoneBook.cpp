/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:20:19 by samajat           #+#    #+#             */
/*   Updated: 2022/08/27 13:19:13 by samajat          ###   ########.fr       */
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

void    display_contact(int index)
{
    std::cout << str_processor(to_string(index)) << str_processor(to_string(contacts[index].first_name))\
    str_processor(to_string(contacts[index].last_name)) << str_processor(to_string(contacts[index].nickname))\
    << std::endl;
}

void    display_contacts_info(Contact contacts[])
{
    int i;

    i = 0;
    while (i < contacts.length())
    {
        display_contact(i);
        i++;
    }
}

void    MyPhoneBook::search (void)
{
    std::string index;

    index = "-1";
    display_contacts_info(this.contacts);
    std :: cout << "Please choose an index:" << std::endl;
    while (stoi(index) >= this->contacts.length() || stoi(index) < 0 )
    {
        index << std :: cin;
        if (index == "EXIT")
        {
            phoneBook.exitProgram = true;
            return ;
        }
        std::cerr << "The index is not valid please try again." << std ::endl;
    }
    display_contact(stoi(i));
}

int main (void)
{
    MyPhoneBook phoneBook;
    std::string input;

    while (!phoneBook.exitProgram)
    {
        input << std::cin;
        if (input == "ADD")
            phoneBook.add_new_contact();
        else if(input == "SEARCH")
            search();
        else if ("EXIT")
            phoneBook.exitProgram = true;
        else
            std::cerr << "Unvalid command." << std::endl;
    }
}