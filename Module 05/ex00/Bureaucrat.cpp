/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:05:07 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 19:54:17 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade): name(Name), grade(Grade){}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    (void)copy;
    return (*this);
}

const std::string& Bureaucrat::getName(void)
{
    return (name);
}

int&  Bureaucrat::getGrade(void)
{
    return (grade);
}

void  Bureaucrat::incrementGrade(void)
{
    try
    {
        if (grade == 1)
            throw GradeTooLowException("Very low grade Error!");
        grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void  Bureaucrat::decrementGrade(void)
{
    try
    {
        if (grade == 150)
            throw GradeTooHighException("Very high grade Error!");
        grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat(void)
{
    
}
