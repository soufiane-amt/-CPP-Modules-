/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:58 by samajat           #+#    #+#             */
/*   Updated: 2022/11/02 15:52:41 by samajat          ###   ########.fr       */
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
    Intern someRandomIntern;
    Form* rrf;
    // rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    // std::cout << rrf->getName() << std::endl;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << &rrf << std::endl;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << &rrf << std::endl;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << &rrf << std::endl;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << &rrf << std::endl;
    // std::cout << rrf->getName() << std::endl;
    // delete rrf;
    // rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
    // std::cout << rrf->getName() << std::endl;
    // delete rrf;
} 
