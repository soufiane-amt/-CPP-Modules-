/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:38:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/03 19:38:29 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string targ):Form("presidential pardon", 25, 5),target(targ)
{
  if (targ=="")
    throw std::invalid_argument("Empty PresidentialPardon target error!\n");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentalP &obj):Form(obj)
{
  if (obj.target=="")
    throw std::invalid_argument("Empty PresidentialPardonForm target error!\n");
  this->target = obj.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentalP &obj)
{
    this->target = obj.target;
  return (*this);
}



void PresidentialPardonForm::formAction(void)const
{
  
  std::cout <<std::endl<< target +" has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string& PresidentialPardonForm::getName(void)  const
{
  return (name);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
