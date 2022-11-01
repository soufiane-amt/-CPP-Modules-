/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:41:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/01 20:59:40 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN

#include <iostream>

class Form;
class Intern
{
private:
    Form               **formAdd;

public:
    Intern();
    Intern(const Intern &obj);
    Intern& operator=(const Intern &obj);
    Form* makeForm(std::string formType, std::string targeti);
    ~Intern();
};

#endif