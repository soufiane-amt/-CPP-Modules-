/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:22:09 by samajat           #+#    #+#             */
/*   Updated: 2022/09/22 18:36:50 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYPHONEBOOK_HPP
#define MYPHONEBOOK_HPP

//Headers
#include "Contact.hpp"
 
class MyPhoneBook
{
    public:
        //variables
        Contact contacts[8];
        int     length;
        bool     exitProgram;
        //Methods
        void    add_new_contact(void);
        void    search (void);
        void    display_contacts_info();
        //Constructor
        MyPhoneBook (){this->length = 0;}
};

#endif