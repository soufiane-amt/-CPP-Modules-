/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:06:06 by samajat           #+#    #+#             */
/*   Updated: 2022/11/03 15:56:07 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(std::string n, const int gToSign, const int gToExec): name(n), gradeToSign(gToSign), gradeToExec(gToExec)
{
    if (n == "")
        throw std::invalid_argument("Empty target error!\n");
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
    this->signedForm = form.signedForm;
    return (*this);
}

const std::string&    Form::getName(void)
{
    return (name);
}

const int&           Form::getGradeToSign(void)
{
    return (gradeToSign);
}

const int&           Form::getGradeToExec(void)
{
    return (gradeToExec);
}

bool                Form::getIsSigned(void)
{
    return (signedForm);
}


std::ostream& operator <<(std::ostream &COUT,  Form &f)
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

Form::~Form()
{
}
