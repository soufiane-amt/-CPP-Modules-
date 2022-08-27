/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:20:19 by samajat           #+#    #+#             */
/*   Updated: 2022/08/27 18:47:18 by samajat          ###   ########.fr       */
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
    std::cout << "---------------------------------------------"<< std::endl;
    std :: cout << "Adding new contact ...Empty fields are unvalid."<< std::endl;
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
    i++;
    if (this->length < 8)
        this->length++;
    std::cout << "---------------------------------------------"<< this->length<< std::endl;
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
    // std::cout << str.length();
    if (str.length() > 10)
    {
        str[9] = '.';
        return (str.substr(0, 10) + "|");   
    }
    while (str.length() != 10)
    {
        str += " ";
        j++;
    }
    return (str + "|");
}

void    display_contact_whole_info(Contact contacts[], int index)
{
    std::cout <<"---------------------------------------------"<< std::endl\
                <<"First Name: "<< contacts[index].first_name << std::endl\
                << "Last Name: "<<contacts[index].last_name<< std::endl\
                << "Nickname: "<<contacts[index].nickname<< std::endl\
                << "Phone Number: "<<contacts[index].phone_number<< std::endl\
                << "Darkest secret: "<<contacts[index].darkest_secret<< std::endl\
                << "---------------------------------------------"<< std::endl;
}

void    MyPhoneBook::display_contacts_info(void)
{
    int i;

    i = 0;
    while (i < this->length)
    {
        std::cout << str_processor(std::to_string(i)) << str_processor(this->contacts[i].first_name)<<\
        str_processor(this->contacts[i].last_name) << str_processor(this->contacts[i].nickname)\
        << std::endl;
        i++;
    }
}

void    MyPhoneBook::search (void)
{
    std::string index;

    index = "-1";
    display_contacts_info();
    std :: cout << "Please choose an index:" << std::endl;
    std :: cin >> index;
    while (std::stoi(index) >= this->length || std::stoi(index) < 0 )
    {
        std::cerr << "The index is not valid please try again." << std ::endl;
        display_contacts_info();
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
        else if (input == "EXIT")
        {
            phoneBook.exitProgram = true;
            std::cout << input << std::endl;
        }
        else
            std::cerr << "Unvalid command." << std::endl;
    }
}