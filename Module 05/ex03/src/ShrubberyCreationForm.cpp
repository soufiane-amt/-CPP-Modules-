/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:41:06 by samajat           #+#    #+#             */
/*   Updated: 2022/11/01 20:23:25 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ):Form("shrubbery request", 145, 137),target(targ)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const Shrubbery &obj):Form(obj)
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const Shrubbery &target)
{
  (void)target;
  return (*this);
}

std::string ShrubberyCreationForm::generateTree(void)
{
    std::string tree;

    tree = "                                              .         ;  \n\
                 .              .              ;%     ;;   \n\
                   ,           ,                :;%  %;   \n\
                    :         ;                   :;%;'     .,   \n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'   \n\
                        `@%.  `;@%.      ;@@%;         \n\
                          `@%%. `@%%    ;@@%;        \n\
                            ;@%. :@%%  %@@%;       \n\
                              %@bd%%%bd%%:;     \n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  . '         \n\
                                %@@@o%;:(.,'         \n\
                            `.. %@@@o%::;         \n\
                               `)@@@o%::;         \n\
                                %@@(o)::;        \n\
                               .%@@@@%::;         \n\
                               ;%@@@@%::;.          \n\
                              ;%@@@@%%:;;;. \n\
                          ...;%@@@@@%%:;;;;,..    \n\n\n";
  return (tree);
}

void ShrubberyCreationForm::formAction(void)
{
    try{
        std::ofstream targetFile;
        targetFile.open(name + "_shrubbery");
        for (int i = 0; i < 5; i++)
            targetFile << generateTree();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
        return;
    }
}

const std::string& ShrubberyCreationForm::getName(void) const
{
  return (name);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
