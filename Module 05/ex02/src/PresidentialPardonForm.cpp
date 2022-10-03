/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:38:03 by samajat           #+#    #+#             */
/*   Updated: 2022/10/02 22:56:35 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 72, 45)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentalP &obj):Form(obj)
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentalP &target)
{
  (void)target;
  return (*this);
}



void PresidentialPardonForm::formAction(void)
{
  
  std::cout <<std::endl<< name +" has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string& PresidentialPardonForm::getName(void)
{
  return (name);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
