/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:10 by samajat           #+#    #+#             */
/*   Updated: 2022/11/01 16:13:12 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef           Form* (Intern::*Forms)();
std::string Intern::formNames[] = {"robotomy request", "shrubbery request", "presidential pardon form"};
Forms Intern::forms[] = {&Intern::getPrsidentPard, &Intern::getRobotRequest, &Intern::getShrubberyCreat};
// Forms Intern::forms = &Intern::getPrsidentPard;

Intern::Intern(void)
{
}

Intern::Intern(const Intern &obj)
{
    (void)obj;
}

Intern& Intern::operator=(const Intern &obj)
{
    (void)obj;
    return (*this);
}

int    Intern::formIsIndex(std::string n)
{
    for (int i = 0; i < 3; i++)
    {
        if (formNames[i] == n)
            return (i);
    }
    return (-1);
}

Form*   Intern::makeForm(std::string formType, std::string targeti)
{
    // switch (formIsIndex(formType))
    // {
    // case 0:
    //     return ((*this).*(forms[0]))(target);
    //     break;
    // case 1:
    //     return ((*this).*(forms[1]))(target);
    //     break;
    // case 2:
    //     return ((*this).*(forms[2]))(target);
    //     break;
    // default:
    //     std::cout << "form name passed as parameter doesn’t exist. "<< std::endl;
    //     break;
    // }
    (void)formType  ;(void)targeti;
    return (NULL);
}

Form    *getPrsidentPard()
{
    // Form *formo = new PresidentialPardonForm(targeti);
    return (NULL);
}
Form    *getRobotRequest(std::string target)
{
    Form *form = new RobotomyRequestForm(target);
    return (form);
}
Form    *getShrubberyCreat(std::string target)
{
    Form *form = new ShrubberyCreationForm(target);
    return (form);
}

Intern::~Intern()
{
}
