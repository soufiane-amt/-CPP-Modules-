/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:38:46 by samajat           #+#    #+#             */
/*   Updated: 2022/10/03 12:02:51 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72, 45)
{
  srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const Robotomy &obj):Form(obj)
{
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const Robotomy &target)
{
  (void)target;
  return (*this);
}



void RobotomyRequestForm::formAction(void)
{
  
  std::cout << "\nHrrrrrrrrrrr, (drilling noises)" << std::endl;
  if (rand() % 2)
    std::cout << "informs that "+ name +" has been robotomized" <<std::endl;
  else
      std::cout << "The robotomy failed." <<std::endl;
}

const std::string& RobotomyRequestForm::getName(void)
{
  return (name);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
