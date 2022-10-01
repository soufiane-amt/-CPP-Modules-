/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:55:00 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 19:52:04 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION
#define GRADETOOHIGHEXCEPTION

#include <iostream>

class GradeTooHighException : public std::exception
{
    public:
    GradeTooHighException (const char* message);
    const char *what() const throw ();

    private:
    const char* message;
};

#endif