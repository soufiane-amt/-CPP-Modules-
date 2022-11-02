/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:10 by samajat           #+#    #+#             */
/*   Updated: 2022/11/02 16:02:16 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
    formAdd = 0;
}

Intern::Intern(const Intern &obj)
{
    formAdd = 0;
    (void)obj;
}

Intern& Intern::operator=(const Intern &obj)
{
    (void)obj;
    return (*this);
}

Form*   Intern::makeForm(std::string formType, std::string target)
{
    static Forms forms[] = { &Intern::getRobotRequest, &Intern::getShrubberyCreat, &Intern::getPrsidentPard};
    this->formAdd = forms;
    for (int i = 0; i < 3; i++)
    {
        if (formType == CALL_MEMBER_FN(*this, forms[i](target)))
            return (forms[i]);
    }
    throw "form name passed as parameter doesn’t exist. ";
    return (NULL);
}

Form*    Intern::getPrsidentPard(std::string target)
{
    Form *form = new PresidentialPardonForm(target);
    return (form);
}

Form*    Intern::getRobotRequest(std::string target)
{
    Form *form = new RobotomyRequestForm(target);
    return (form);
}

Form*    Intern::getShrubberyCreat(std::string target)
{
    Form *form = new ShrubberyCreationForm(target);
    return (form);
} 

Intern::~Intern()
{
    if (!formAdd)
        return;
    for (size_t i = 0; i < 3; i++)
    {
        delete this->formAdd[i];
    }
}
