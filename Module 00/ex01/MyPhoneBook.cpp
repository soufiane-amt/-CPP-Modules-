/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:20:19 by samajat           #+#    #+#             */
/*   Updated: 2022/09/23 11:22:32 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"

void    MyPhoneBook :: add_new_contact (void)
{
    Contact new_contact;
    static  int i;

    if(i == 8)
        i = 0;
    std::cout << "---------------------------------------------"<< std::endl;
    std :: cout << "Adding new contact ...Empty fields are unvalid."<< std::endl;
    std :: cout << "First Name:"<< std::endl;
    getInput(&new_contact.first_name, "First Name");
    std :: cout << "Last Name:"<< std::endl;
    getInput(&new_contact.last_name, "Last Name");
    std :: cout << "Nickname:"<< std::endl;
    getInput(&new_contact.nickname, "Nickname");
    std :: cout << "Phone number:"<< std::endl;
    getInput(&new_contact.phone_number, "Phone number");
    std :: cout << "Darkest secret:"<< std::endl;
    getInput(&new_contact.darkest_secret, "Darkest secret");
    this->contacts[i] = new_contact;
    i++;
    if (this->length < 8)
        this->length++;
    std::cout << "---------------------------------------------"<< std::endl;
}

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
    getline(std::cin, index);
    while (isNumber(index) && (std::stoi(index) >= this->length || std::stoi(index) < 0))
    {
        std::cerr << "The index is not valid please try again." << std ::endl;
        if(!getline(std::cin, index))
            exit(1);
        display_contacts_info();
        if (index == "EXIT")
            exit(1);
    }
    if(isNumber(index))
        display_contact_whole_info(contacts, std::stoi(index));
    else
        std::cerr << "-----Invalid input.----- :)" << std::endl;
}

int displayOptionList(void)
{
    std::cout << "ADD: save a new contact." << std::endl << "SEARCH: display a specific contact."\
              << std::endl << "EXIT: to exit program." << std::endl << std::endl << ">";
    return (1);
}
int main (void)
{
    MyPhoneBook phoneBook;
    std::string input;

    while (displayOptionList() && getline(std::cin, input))
    {
        if (input == "ADD")
            phoneBook.add_new_contact();
        else if(input == "SEARCH")
            phoneBook.search();
        else if (input == "EXIT")
        {
            exit(1);
            std::cout << input << std::endl;
        }
        else
            std::cerr << "Unvalid command." << std::endl;
    }
}