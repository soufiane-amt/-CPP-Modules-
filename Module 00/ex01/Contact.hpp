/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:19:24 by samajat           #+#    #+#             */
/*   Updated: 2022/09/26 11:19:03 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

//Headers
#include "iostream"
#include "string"
#include <iomanip>

//Classes
class Contact
{
    public:
        void           setFirstName(std::string fname);
        void           setLastName(std::string lname);
        void           setNickName(std::string niname);
        void           setPhoneNumber(std::string phoneNumb);
        void           setDarkSecret(std::string DarkSecret);
        std::string    getFirstName(void);
        std::string    getLastName(void);
        std::string    getNickName(void);
        std::string    getPhoneNumber(void);
        std::string    getDarkSecret(void);
        void           display_contact_whole_info(void);


    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif