/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:22:09 by samajat           #+#    #+#             */
/*   Updated: 2022/09/26 11:51:48 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYPHONEBOOK_HPP
#define MYPHONEBOOK_HPP

//Headers
#include "Contact.hpp"
 
class MyPhoneBook
{
    public:
        MyPhoneBook (){this->length = 0;}
        void    add_new_contact(void);
        void    search (void);
        
    private:
        Contact contacts[8];
        int     length;
        void    display_contacts_info();
};


//func
bool isNumber(std::string s);
void    printErrMessage(std :: string field_name);
std::string    getInput(std :: string field_name);
#endif