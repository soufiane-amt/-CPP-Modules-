/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:39:02 by samajat           #+#    #+#             */
/*   Updated: 2022/11/02 14:46:58 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

//Header
#include <iostream>
#include <string>


class Form;

class Bureaucrat
{
    public:
    class GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException (const char* message);
        const char *what() const throw ();

        private:
        const char* message;
    };
    class GradeTooLowException : public std::exception
    {
       public:
       GradeTooLowException (const char* message);
       const char *what()const throw ();
    
       private:
       const char* message;
    };
    Bureaucrat(const std::string Name="", int Grad=0);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    const std::string &getName(void);
    int               &getGrade(void);
    void              incrementGrade(void);
    void              decrementGrade(void);
    void              signForm( Form &form);
    ~Bureaucrat();

    private:
    const std::string name;
    int              grade;
};

std::ostream& operator <<(std::ostream &COUT, Bureaucrat &b);
#endif