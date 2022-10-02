/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:58 by samajat           #+#    #+#             */
/*   Updated: 2022/10/02 12:08:19 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat b = Bureaucrat("Trotsky", 5);
    Bureaucrat a = Bureaucrat("b", 150);
    Form form = Form("list", 0, 151);

    // std::cout << b << a ;
    // a.decrementGrade();
    b.incrementGrade();
    b.signForm(form);
} 