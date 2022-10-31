/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:58 by samajat           #+#    #+#             */
/*   Updated: 2022/10/31 15:54:08 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
    try
    {
        Bureaucrat b = Bureaucrat("lm9dem", 145);
        RobotomyRequestForm r("rob");
        ShrubberyCreationForm s("shrubbery");
        PresidentialPardonForm p("presidential");
        b.signForm(s);
        b.executeForm(s);
        b.signForm(r);
        b.executeForm(r);
        b.signForm(p);
        b.executeForm(p);
        s.formAction();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
} 
