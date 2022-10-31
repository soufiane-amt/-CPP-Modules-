# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:15:03 by samajat           #+#    #+#              #
#    Updated: 2022/10/31 16:05:53 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CHO

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I includes/

RM = rm -rf

FILES = Bureaucrat Form\
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