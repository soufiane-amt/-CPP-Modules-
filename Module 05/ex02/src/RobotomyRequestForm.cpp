/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:38:46 by samajat           #+#    #+#             */
/*   Updated: 2022/11/03 18:52:47 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string targ):Form("robotomy request", 72, 45),target(targ)
{
  if (targ=="")
    throw std::invalid_argument("Empty Robotomy target error!\n");
}

RobotomyRequestForm::RobotomyRequestForm(const Robotomy &obj):Form(obj)
{
  if (obj.target=="")
    throw std::invalid_argument("Empty RobotomyRequestForm target error!\n");
  this->target = obj.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const Robotomy &obj)
{
    this->target = obj.target;
  return (*this);
}


void RobotomyRequestForm::formAction(void) const
{
  srand(time(NULL));
  std::cout << "\nHrrrrrrrrrrr, (drilling noises)" << std::endl;
  if (rand() % 2)
    std::cout << "informs that "+ name +" has been robotomized" <<std::endl;
  else
      std::cout << "The robotomy failed." <<std::endl;
}

const std::string& RobotomyRequestForm::getName(void)  const
{
  return (name);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
