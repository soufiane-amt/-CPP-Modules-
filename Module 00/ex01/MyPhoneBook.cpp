/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:20:19 by samajat           #+#    #+#             */
/*   Updated: 2022/08/27 16:03:35 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

void    Contact :: field_err_checker(std :: string info, std :: string field_name)
{
    std :: string error_message;

    error_message = " field is empty please enter a valid input.";
    if (info.empty())//Problem
        std :: cerr << "The " << field_name << error_message;
}

void    MyPhoneBook :: add_new_contact (void)
{
    Contact new_contact;
    static  int i;

    if(i == 8)
        i = 0;
    std :: cout << "Adding new contact ..."<< std::endl;
    std :: cout << "First Name:";
    std :: cin >> new_contact.first_name;
    new_contact.field_err_checker(new_contact.first_name, "First Name");
    std :: cout << "Last Name:";
    std :: cin >> new_contact.last_name;
    new_contact.field_err_checker(new_contact.last_name, "Last Name");
    std :: cout << "Nickname:";
    std :: cin >> new_contact.nickname;
    new_contact.field_err_checker(new_contact.nickname, "Nickname");
    std :: cout << "Phone number:";
    std :: cin >> new_contact.phone_number ;
    new_contact.field_err_checker(new_contact.phone_number, "Phone number");
    std :: cout << "Darkest secret:";
    std :: cin >> new_contact.darkest_secret;
    new_contact.field_err_checker(new_contact.darkest_secret, "Darkest secret");
    this->contacts[i] = new_contact;
    if (i < 8)
        this->length++;
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
    while (j < (int)(10 - str.length()))
    {
        str += " ";
        j++;
    }
    return (str + "|");
}

void    display_contact_whole_info(Contact contacts[], int index)
{
    std::cout << "First Name: "<< contacts[index].first_name << std::endl\
                << "Last Name: "<<contacts[index].last_name<< std::endl\
                << "Nickname: "<<contacts[index].nickname<< std::endl\
                << "Phone Number: "<<contacts[index].phone_number<< std::endl\
                << "Darkest secret: : "<<contacts[index].darkest_secret<< std::endl\
                << "---------------------------------------------"<< std::endl;
}

void    display_contacts_info(Contact contacts[], int length)
{
    int i;

    i = 0;
    while (i < length)
    {
        std::cout << str_processor(std::to_string(i)) << str_processor(contacts[i].first_name)<<\
        str_processor(contacts[i].last_name) << str_processor(contacts[i].nickname)\
        << std::endl;
        i++;
    }
}

void    MyPhoneBook::search (void)
{
    std::string index;

    index = "-1";
    display_contacts_info(this->contacts, this->length);
    std :: cout << "Please choose an index:" << std::endl;
    std :: cin >> index;
    while (std::stoi(index) >= (int)(sizeof(Contact)/sizeof(contacts[0])) || std::stoi(index) < 0 )
    {
        std::cerr << "The index is not valid please try again." << std ::endl;
        std :: cin >> index;
        if (index == "EXIT")
        {
            this->exitProgram = true;
            return ;
        }
    }
    display_contact_whole_info(contacts, std::stoi(index));
}

int main (void)
{
    MyPhoneBook phoneBook;
    std::string input;

    phoneBook.exitProgram = false;//check whether the phonebook contains at least one element
    while (!phoneBook.exitProgram)
    {
        std::cout << "ADD: save a new contact." << std::endl << "SEARCH: display a specific contact."\
                  << std::endl << "EXIT: to exit program." << std::endl << ">";
        std::cin >> input;
        if (input == "ADD")
            phoneBook.add_new_contact();
        else if(input == "SEARCH")
            phoneBook.search();
        else if ("EXIT")
            phoneBook.exitProgram = true;
        else
            std::cerr << "Unvalid command." << std::endl;
    }
}