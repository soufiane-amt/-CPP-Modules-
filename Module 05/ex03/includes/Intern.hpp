/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/02 16:49:43 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN

#include <iostream>

#define CALL_MEMBER_FN(object,ptrToMember)  ((object).*(ptrToMember))

class Form;
class Intern
{
private:
    typedef           Form* (Intern::*Forms)(std::string name);
    Form               *getPrsidentPard(std::string target);
    Form               *getRobotRequest(std::string target);
    Form               *getShrubberyCreat(std::string target);

public:
    Intern();
    Intern(const Intern &obj);
    Intern& operator=(const Intern &obj);
    Form* makeForm(std::string formType, std::string targeti);
    ~Intern();
};

#endif