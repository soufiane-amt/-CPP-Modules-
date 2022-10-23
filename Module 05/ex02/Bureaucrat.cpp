/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:05:07 by samajat           #+#    #+#             */
/*   Updated: 2022/10/23 19:45:23 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string Name, int Grade): name(Name)
{
    if (Grade < 1)
          throw Bureaucrat::GradeTooHighException("Very low grade Error!");
    else if (Grade > 150)
         throw Bureaucrat::GradeTooLowException("Very high grade Error!");
    grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    (void)copy;
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

const int&  Bureaucrat::getGrade(void) const 
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
    std::cout << *this << " signed " << form <<std::endl;
}

void    Bureaucrat::executeForm(Form const & form)
{
    if (!form.getIsSigned())
    {
        std::cout << "The form is not signed." << std::endl;
        return;
    }
    try
    {
        form.execute(*this);
        std::cout << *this << " executed " << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << *this << " couldn’t execute " << form <<" because " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat(void)
{
    
}
