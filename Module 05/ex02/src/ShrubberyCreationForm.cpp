/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:41:06 by samajat           #+#    #+#             */
/*   Updated: 2022/10/02 18:41:58 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const shrubbery &obj):Form(obj)
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const shrubbery &target)
{
    (void)target;
}

std::string& ShrubberyCreationForm::generateTree(void)
{
    std::string tree;

    tree = "                                              .         ;  \
                 .              .              ;%     ;;   \
                   ,           ,                :;%  %;   \
                    :         ;                   :;%;'     .,   \
           ,.        %;     %;            ;        %;'    ,;\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \
               ;%;      %;        ;%;        % ;%;  ,%;'\
                `%;.     ;%;     %;'         `;%%;.%;'\
                 `:;%.    ;%%. %@;        %; ;@%;%'\
                    `:%;.  :;bd%;          %;@%;'\
                      `@%:.  :;%.         ;@@%;'   \
                        `@%.  `;@%.      ;@@%;         \
                          `@%%. `@%%    ;@@%;        \
                            ;@%. :@%%  %@@%;       \
                              %@bd%%%bd%%:;     \
                                #@%%%%%:;;\
                                %@@%%%::;\
                                %@@@%(o);  . '         \
                                %@@@o%;:(.,'         \
                            `.. %@@@o%::;         \
                               `)@@@o%::;         \
                                %@@(o)::;        \
                               .%@@@@%::;         \
                               ;%@@@@%::;.          \
                              ;%@@@@%%:;;;. \
                          ...;%@@@@@%%:;;;;,..    \n\n\n";
}

void ShrubberyCreationForm::createTargetTreesFile(void)
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
    {
        targetFile << generateTree();
    }
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
