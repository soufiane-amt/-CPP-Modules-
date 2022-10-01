/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:06 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 21:23:36 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form(void){}

Form::Form(std::string n, const int gToSign, const int gToExec): name(n), gradeToSign(gToSign), gradeToExec(gToExec)
{
    try
    {
        if (gradeToSign < 1)
            throw GradeTooHighException("Very high grade for form Bureaucrat signer Error!");
        else if (gradeToSign > 150)
            throw GradeTooLowException("Very low grade for form Bureaucrat signer Error!");
        if (gradeToExec < 1)
            throw GradeTooHighException("Very high grade for form Bureaucrat executor Error!");
        else if (gradeToExec > 150)
            throw GradeTooLowException("Very low grade for form Bureaucrat executor Error!");
        signedForm = false;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

Form::Form(const Form &form):name(form.name), gradeToSign(form.gradeToSign), gradeToExec(form.gradeToExec), signedForm(form.signedForm)
{
}

Form& Form::operator=(const Form &form)
{
    (void)form;
}

const std::string    Form::getName(void)
{
    return (name);
}

const int           Form::getGradeToSign(void)
{
    return (gradeToSign);
}

const int           Form::getGradeToExec(void)
{
    return (gradeToExec);
}

bool                Form::getIsSigned(void)
{
    return (signedForm);
}


std::ostream& operator <<(std::ostream &COUT,  Form &f)
{
    COUT << f.getName() << ", Executor grade: " << f.getGradeToExec() << " , Signer grade: " << f.getGradeToSign() << ", Signed :" << f.getIsSigned() << std::endl;
    return (COUT);
}

Form::~Form()
{
}
