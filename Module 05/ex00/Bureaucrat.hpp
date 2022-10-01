/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:39:02 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 19:26:50 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

//Header
#include <iostream>
#include <string>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

//Class
class Bureaucrat
{
    public:
    Bureaucrat(void);
    Bureaucrat(const std::string Name, int Grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    const std::string &getName(void);
    int               &getGrade(void);
    void              incrementGrade(void);
    void              decrementGrade(void);
    ~Bureaucrat();

    private:
    const std::string name;
    int              grade;
};
#endif