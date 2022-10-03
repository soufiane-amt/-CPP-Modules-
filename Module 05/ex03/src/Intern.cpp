/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:10 by samajat           #+#    #+#             */
/*   Updated: 2022/10/03 15:38:36 by samajat          ###   ########.fr       */
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

Intern::~Intern()
{
}
