/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:55:00 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 18:01:24 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION
#define GRADETOOHIGHEXCEPTION

#include <iostream>

class GradeTooHighException : public std::exception
{
    public:
    char *what();
};

#endif