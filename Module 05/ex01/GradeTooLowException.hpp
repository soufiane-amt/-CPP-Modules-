/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:56:28 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 19:54:35 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION
#define GRADETOOLOWEXCEPTION

#include <iostream>

class GradeTooLowException : public std::exception
{
    public:
    GradeTooLowException (const char* message);
    const char *what()const throw ();

    private:
    const char* message;
};

#endif