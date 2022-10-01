/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:05:07 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 21:32:31 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string Name, int Grade): name(Name)
{
    try
    {
        if (Grade < 1)
            throw GradeTooHighException("Very low grade Error!");
        else if (Grade > 150)
            throw GradeTooLowException("Very high grade Error!");
        grade = Grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    (void)copy;
    return (*this);
}

std::ostream& operator <<(std::ostream &COUT,  Bureaucrat &b)
{
    COUT << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
    return (COUT);
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
            throw GradeTooHighException("Very high grade Error!");
        grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

void  Bureaucrat::decrementGrade(void)
{
    try
    {
        if (grade == 150)
            throw GradeTooLowException("Very low grade Error!");
        grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

Bureaucrat::~Bureaucrat(void)
{
    
}
