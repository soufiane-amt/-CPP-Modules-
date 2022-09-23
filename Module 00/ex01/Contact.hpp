/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:19:24 by samajat           #+#    #+#             */
/*   Updated: 2022/09/23 19:09:10 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

//Headers
#include "iostream"
#include "string"

//Classes
class Contact
{
    public:
        void    display_contact_whole_info(Contact contacts[], int index);
        void    setFirstName(std::string fname);
        void    setLastName(std::string lname);
        void    setNickName(std::string niname);
        void    setPhoneNumber(std::string phoneNumb);
        void    setDarkSecret(std::string DarkSecret);

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif