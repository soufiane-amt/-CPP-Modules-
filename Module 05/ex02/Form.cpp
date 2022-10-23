/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:06 by samajat           #+#    #+#             */
/*   Updated: 2022/10/23 19:11:00 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(std::string n, const int gToSign, const int gToExec): name(n), gradeToSign(gToSign), gradeToExec(gToExec)
{
    if (gradeToSign < 1)
         throw Bureaucrat::GradeTooHighException("Very high grade for form Bureaucrat signer Error!");
     else if (gradeToSign > 150)
          throw Bureaucrat::GradeTooLowException("Very low grade for form Bureaucrat signer Error!");
     if (gradeToExec < 1)
         throw Bureaucrat::GradeTooHighException("Very high grade for form Bureaucrat executor Error!");
     else if (gradeToExec > 150)
         throw Bureaucrat::GradeTooLowException("Very low grade for form Bureaucrat executor Error!");
     signedForm = false;
}

Form::Form(const Form &form):name(form.name), gradeToSign(form.gradeToSign), gradeToExec(form.gradeToExec), signedForm(form.signedForm)
{
}

Form& Form::operator=(const Form &form)
{
    (void)form;
    return (*this);
}

const std::string&    Form::getName(void) const
{
    return (name);
}

const int&           Form::getGradeToSign(void) const
{
    return (gradeToSign);
}

const int&           Form::getGradeToExec(void) const
{
    return (gradeToExec);
}

bool                Form::getIsSigned(void) const
{
    return (signedForm);
}


std::ostream& operator <<(std::ostream &COUT,  Form const &f)
{
    COUT << f.getName() << ", Executor grade: " << f.getGradeToExec() << " , Signer grade: " << f.getGradeToSign() << ", Signed :" << f.getIsSigned();
    return (COUT);
}

void                 Form::beSigned(Bureaucrat & b) 
{
    if (b.getGrade() <= this->getGradeToSign())
        this->signedForm = true;
    else
        throw Bureaucrat::GradeTooLowException("he/she hasn't reached the appropriate grade.");
}

void    Form::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw Bureaucrat::GradeTooLowException("he/she hasn't reached the appropriate grade to exceute.");
}

Form::~Form()
{
}
