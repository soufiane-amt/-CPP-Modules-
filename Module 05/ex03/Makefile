# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:15:03 by samajat           #+#    #+#              #
#    Updated: 2022/10/23 22:03:27 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CHO

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -I includes/

RM = rm -rf

FILES = Bureaucrat GradeTooHighException GradeTooLowException Form\
		PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm\
		Intern

HEADERS = $(FILES:=.hpp)

OBJ = $(addprefix src/, $(FILES:=.o)) main.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -cfsfds $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all