/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:58 by samajat           #+#    #+#             */
/*   Updated: 2022/10/30 20:01:48 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
    // Bureaucrat b = Bureaucrat("Trotsky", 45);
    // Bureaucrat a = Bureaucrat("b", 150);
    // PresidentialPardonForm s("home");

    // b.signForm(s);
    // b.executeForm(s);
    // s.formAction();
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomyd request", "Bender");
    std::cout << rrf->getGradeToSign();
} 
