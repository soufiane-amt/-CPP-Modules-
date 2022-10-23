/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:07 by samajat           #+#    #+#             */
/*   Updated: 2022/10/23 20:09:36 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
protected:
    const std::string name;
    const int         gradeToSign;
    const int         gradeToExec;
    bool              signedForm;
    
public:
    Form(const std::string n, const int gToSign, const int gToExec);
    Form(const Form &form);
    Form& operator=(const Form &form);
    virtual const std::string&    getName(void) const  = 0;
    const int&            getGradeToSign(void) const;
    const int&            getGradeToExec(void) const;
    bool                  getIsSigned(void) const;
    void                  execute(Bureaucrat const & executor) const;
    void                  beSigned(Bureaucrat &b) ;//protected
    virtual void          formAction(void) = 0;
    ~Form();
};

std::ostream& operator <<(std::ostream &COUT, Form const &f);


#endif