/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:55:02 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 18:02:54 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

char    *what()
{
    return "The grade is too high for grade range!";
}