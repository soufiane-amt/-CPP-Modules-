/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:20:19 by samajat           #+#    #+#             */
/*   Updated: 2022/09/23 20:11:08 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"

void    Contact::display_contact_whole_info(void)
{
    std::cout <<"---------------------------------------------"<< std::endl\
                <<"First Name: "<< this->getFirstName() << std::endl\
                << "Last Name: "<<this->getLastName()<< std::endl\
                << "Nickname: "<<this->getNickName()<< std::endl\
                << "Phone Number: "<<this->getPhoneNumber()<< std::endl\
                << "Darkest secret: "<<this->getDarkSecret()<< std::endl\
                << "---------------------------------------------"<< std::endl;
}

void    MyPhoneBook :: add_new_contact (void)
{
    Contact newContact;
    static  int i;

    if(i == 8)
        i = 0;
    std::cout << "---------------------------------------------"<< std::endl;
    std :: cout << "Adding new contact ...Empty fields are unvalid."<< std::endl;
    std :: cout << "First Name:"<< std::endl;
    newContact.setFirstName(getInput("First Name"));
    std :: cout << "Last Name:"<< std::endl;
    newContact.setLastName(getInput("Last Name"));
    std :: cout << "Nickname:"<< std::endl;
    newContact.setNickName(getInput("Nickname"));
    std :: cout << "Phone number:"<< std::endl;
    newContact.setPhoneNumber(getInput("Phone number"));
    std :: cout << "Darkest secret:"<< std::endl;
    newContact.setDarkSecret(getInput("Darkest secret"));
    this->contacts[i] = newContact;
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


void    MyPhoneBook::display_contacts_info(void)
{
    int i;

    i = 0;
    while (i < this->length)
    {
        std::cout << str_processor(std::to_string(i)) << str_processor(this->contacts[i].getFirstName())<<\
        str_processor(this->contacts[i].getLastName()) << str_processor(this->contacts[i].getNickName())\
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
        // display_contact_whole_info(contacts, );
    if(isNumber(index))
        contacts[std::stoi(index)].display_contact_whole_info();
    else
        std::cerr << "-----Invalid input.----- :)" << std::endl;
}

int displayOptionList(void)
{
    std::cout << "ADD: save a new contact." << std::endl << "SEARCH: display a specific contact."\
              << std::endl << "EXIT: to exit program." << std::endl << std::endl << ">";
    return (1);
}




void    Contact::setFirstName(std::string fname)
{
    this->firstName = fname;
}

void    Contact::setLastName(std::string lname)
{
    this->lastName = lname;
}

void    Contact::setNickName(std::string niname)
{
    this->nickName = niname;
}

void    Contact::setPhoneNumber(std::string phoneNumb)
{
    this->phoneNumber = phoneNumb;
}

void    Contact::setDarkSecret(std::string DarkSecret)
{
    this->darkestSecret = DarkSecret;
}


std::string    Contact::getFirstName(void)
{
    return (this->firstName);
}
std::string    Contact::getLastName(void)
{
    return (this->lastName);
}
std::string    Contact::getNickName(void)
{
    return (this->nickName);
}
std::string    Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}
std::string    Contact::getDarkSecret(void)
{
    return (this->darkestSecret);
}
// int            MyPhoneBook::getLength(void)
// {
//     return (length);
// }


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
            exit(1);
        else
            std::cerr << "Unvalid command. Please try again!" << std::endl;
    }
}