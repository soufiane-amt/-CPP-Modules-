/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:10 by samajat           #+#    #+#             */
/*   Updated: 2022/11/01 20:59:33 by samajat          ###   ########.fr       */
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
    static Form *forms[] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
    this->formAdd = forms;
    for (int i = 0; i < 3; i++)
    {
        if (formType == forms[i]->getName())
            return (forms[i]);
    }
    throw "form name passed as parameter doesn’t exist. ";
    return (NULL);
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
