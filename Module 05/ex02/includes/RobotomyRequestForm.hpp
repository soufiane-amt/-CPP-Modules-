/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:10:40 by samajat           #+#    #+#             */
/*   Updated: 2022/10/03 13:19:10 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <time.h> 

class RobotomyRequestForm : public Form
{
public:
    typedef RobotomyRequestForm Robotomy;
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const Robotomy &obj);
    RobotomyRequestForm &operator=(const Robotomy &target);
    ~RobotomyRequestForm();
    void formAction(void);
    const std::string&    getName(void)  const;
};


#endif