/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:02 by samajat           #+#    #+#             */
/*   Updated: 2022/10/03 15:32:42 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN

#include <iostream>

class Form;
class Intern
{
private:
    static std::string formNames[3];
    static int        formIsIndex(std::string n);
public:
    Intern();
    Intern(const Intern &obj);
    Intern& operator=(const Intern &obj);
    Form* makeForm(std::string formType, std::string target);
    ~Intern();
};



#endif