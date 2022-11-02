/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:05:07 by samajat           #+#    #+#             */
/*   Updated: 2022/11/02 14:46:46 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string Name, int Grade): name(Name)
{
        if (Name == "")
            throw std::invalid_argument("Empty Bureacrat error!\n");
        if (Grade < 1)
            throw Bureaucrat::GradeTooHighException("Very low grade Error!");
        else if (Grade > 150)
            throw Bureaucrat::GradeTooLowException("Very high grade Error!");
        grade = Grade;

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    this->grade = copy.grade;
    return (*this);
}

std::ostream& operator <<(std::ostream &COUT,  Bureaucrat &b)
{
    COUT << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
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
        if (grade == 1)
            throw Bureaucrat::GradeTooHighException("Very high grade Error!");
        grade--;
}

void  Bureaucrat::decrementGrade(void)
{
        if (grade == 150)
            throw Bureaucrat::GradeTooLowException("Very low grade Error!");
        grade++;
}

void   Bureaucrat::signForm(Form &form)
{
    form.beSigned(*this);
    std::cout << *this << " signed " << form;
}

Bureaucrat::~Bureaucrat(void)
{
    
}

Bureaucrat::GradeTooHighException::GradeTooHighException (const char* message): message(message){}

const char    *Bureaucrat::GradeTooHighException::what() const throw ()
{
    return message;
}

Bureaucrat::GradeTooLowException::GradeTooLowException (const char* message): message(message){}

const char*    Bureaucrat::GradeTooLowException::what()const throw ()
{
    return message;
}