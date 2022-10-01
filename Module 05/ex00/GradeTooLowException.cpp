/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:56:24 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 19:50:29 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException (const char* message): message(message){}

const char*    GradeTooLowException::what()const throw ()
{
    return message;
}