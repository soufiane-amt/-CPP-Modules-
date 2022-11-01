/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:58 by samajat           #+#    #+#             */
/*   Updated: 2022/11/01 21:06:13 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <stdlib.h>
int main ()
{
    // Bureaucrat b = Bureaucrat("Trotsky", 45);
    // Bureaucrat a = Bureaucrat("b", 150);
    // PresidentialPardonForm s("home");

    // b.signForm(s);
    // b.executeForm(s);
    // s.formAction();
    // try
    // {
    //     Intern someRandomIntern;
    //     Form* rrf;
    //     rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
    //     std::cout << rrf->getGradeToSign();
    // }
    // catch(char const* e)
    // {
    //     std::cout << e;
    // }
    Form* form = new PresidentialPardonForm("lol");
    delete form;
    (void)form; 
} 
