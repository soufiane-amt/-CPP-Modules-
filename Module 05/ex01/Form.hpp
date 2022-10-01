/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:07 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 21:11:21 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"

class Form
{
protected:
    const std::string name;
    const int        gradeToSign;
    const int        gradeToExec;
    bool             signedForm;
    
public:
    Form(void);
    Form(const std::string n, const int gToSign, const int gToExec);
    Form(const Form &form);
    Form& operator=(const Form &form);
    const std::string    getName(void);
    const int            getGradeToSign(void);
    const int            getGradeToExec(void);
    bool                 getIsSigned(void);
    ~Form();
};



#endif