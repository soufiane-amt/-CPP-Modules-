/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:10 by samajat           #+#    #+#             */
/*   Updated: 2022/10/03 14:44:55 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

std::string Intern::formNames[] = {"robotomy request", "shrubbery request", "presidential pardon form"};

Intern::Intern(void)
{
}

Intern::Intern(const Intern &obj)
{
}

Intern& Intern::operator=(const Intern &obj)
{
    return (*this);
}

int    Intern::formIsIndex(std::string n)
{
    int i = 0;

    i += (n != formNames[0]);
    i += (n != formNames[1]);
    i += (n != formNames[2]);
    return (i);
}

void    Intern::makeForm(std::string formType, std::string target)
{
    switch ()
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}

Intern::~Intern()
{
}
