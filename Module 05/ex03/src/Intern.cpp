/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:10 by samajat           #+#    #+#             */
/*   Updated: 2022/10/31 17:54:50 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

std::string Intern::formNames[] = {"robotomy request", "shrubbery request", "presidential pardon form"};

Intern::Intern(void)
{
    forms[0] = &Intern::getPrsidentPard;
    forms[1] = &Intern::getRobotRequest;
    forms[2] = &Intern::getShrubberyCreat;
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

Form*   Intern::makeForm(std::string formType, std::string target)
{
    Form *form = NULL;

    switch (formIsIndex(formType))
    {
    case 0:
        form = new RobotomyRequestForm(target);
        break;
    case 1:
        form = new ShrubberyCreationForm(target);
        break;
    case 2:
        form = new PresidentialPardonForm(target);
        break;
    default:
        std::cout << "form name passed as parameter doesn’t exist. "<< std::endl;
        exit(1);
        break;
    }
    return (form);
}

Form    *getPrsidentPard(std::string target)
{
    Form *form = new PresidentialPardonForm(target);
    return (form);
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
