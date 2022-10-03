/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:41:06 by samajat           #+#    #+#             */
/*   Updated: 2022/10/03 13:18:30 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145, 137)
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
    std::ofstream targetFile;
    try{
        targetFile.open(name + "_shrubbery");
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
        return;
    }
    for (int i = 0; i < 5; i++)
        targetFile << generateTree();
}

const std::string& ShrubberyCreationForm::getName(void) const
{
  return (name);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
