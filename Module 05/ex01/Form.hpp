/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:40:07 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 20:50:24 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM

#include <iostream>

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
    ~Form();
};



#endif