/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:02 by samajat           #+#    #+#             */
/*   Updated: 2022/10/31 17:56:20 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN

#include <iostream>

class Form;
class Intern
{
private:
    typedef           Form* (Intern::*Forms)(std::string name);
    Forms             forms[3];
    Form              *getPrsidentPard(std::string target);
    Form              *getRobotRequest(std::string target);
    Form              *getShrubberyCreat(std::string target);
    int                formIsIndex(std::string n);
    static             std::string formNames[3];

public:
    Intern();
    Intern(const Intern &obj);
    Intern& operator=(const Intern &obj);
    Form* makeForm(std::string formType, std::string target);
    ~Intern();
};



#endif