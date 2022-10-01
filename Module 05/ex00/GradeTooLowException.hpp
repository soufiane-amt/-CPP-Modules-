/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:56:28 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 18:03:26 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION
#define GRADETOOLOWEXCEPTION

#include <iostream>

class GradeTooLowException : public std::exception
{
    public:
    char *what();
};

#endif