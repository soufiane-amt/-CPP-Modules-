/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:38:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/01 19:41:51 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string targ):Form("presidential pardon", 25, 5),target(targ)
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

const std::string& PresidentialPardonForm::getName(void)  const
{
  return (name);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
