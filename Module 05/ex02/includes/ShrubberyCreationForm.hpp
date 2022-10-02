/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:10:38 by samajat           #+#    #+#             */
/*   Updated: 2022/10/02 18:41:48 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <string>

typedef class ShrubberyCreationForm : public Form
{
public:
    typedef ShrubberyCreationForm shrubbery;
    ShrubberyCreationForm(std::string const target);
    ShrubberyCreationForm(const shrubbery &obj);
    ShrubberyCreationForm &operator=(const shrubbery &target);
    ~ShrubberyCreationForm();
    void createTargetTreesFile(void);

private:
    std::string& generateTree(void);
};



#endif