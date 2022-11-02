/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:07 by samajat           #+#    #+#             */
/*   Updated: 2022/11/02 14:39:16 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM

#include <iostream>
#include <string>
class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int        gradeToSign;
    const int        gradeToExec;
    bool             signedForm;
    
public:
    Form(const std::string n="", const int gToSign=0, const int gToExec=0);
    Form(const Form &form);
    Form& operator=(const Form &form);
    const std::string&    getName(void);
    const int&            getGradeToSign(void);
    const int&            getGradeToExec(void);
    bool                  getIsSigned(void);
    void                  beSigned(Bureaucrat &b);
    ~Form();
};

std::ostream& operator <<(std::ostream &COUT, Form &f);


#endif