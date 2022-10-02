/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:07 by samajat           #+#    #+#             */
/*   Updated: 2022/10/02 17:25:21 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM

#include <iostream>
#include <string>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat;

class Form
{
protected:
    const std::string name;
    const int        gradeToSign;
    const int        gradeToExec;
    bool             signedForm;
    
public:
    Form(const std::string n, const int gToSign, const int gToExec);
    Form(const Form &form);
    Form& operator=(const Form &form);
    virtual const std::string&    getName(void) = 0;
    const int&            getGradeToSign(void);
    const int&            getGradeToExec(void);
    bool                  getIsSigned(void);
    void                  beSigned(Bureaucrat &b);
    ~Form();
};

std::ostream& operator <<(std::ostream &COUT, Form &f);


#endif