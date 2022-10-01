/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:06 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 20:55:30 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form()
{
}

Form::Form(std::string n, const int gToSign, const int gToExec): name(n), gradeToSign(gToSign), gradeToExec(gToExec)
{
    signedForm = 0;
}

Form::Form(const Form &form):name(form.name), gradeToSign(form.gradeToSign), gradeToExec(form.gradeToExec), signedForm(form.signedForm)
{
}

Form::Form& operator=(const Form &form)
{
    
}

Form::~Form()
{
}
