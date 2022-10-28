/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:58 by samajat           #+#    #+#             */
/*   Updated: 2022/10/28 16:16:43 by samajat          ###   ########.fr       */
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
        Bureaucrat b = Bureaucrat("Trotsky", 45);
        Bureaucrat a = Bureaucrat("b", 150);
        RobotomyRequestForm r("rob");
        ShrubberyCreationForm s("shrubbery");
        PresidentialPardonForm p("presidential");
        b.signForm(s);
        b.executeForm(s);
        s.formAction();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
} 
