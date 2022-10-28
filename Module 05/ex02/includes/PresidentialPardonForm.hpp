/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:14:30 by samajat           #+#    #+#             */
/*   Updated: 2022/10/28 16:12:37 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
public:
    typedef PresidentialPardonForm PresidentalP;
    PresidentialPardonForm(const std::string target="");
    PresidentialPardonForm(const PresidentalP &obj);
    PresidentialPardonForm &operator=(const PresidentalP &target);
    ~PresidentialPardonForm();
    void formAction(void);
    const std::string&    getName(void)  const;
};

#endif