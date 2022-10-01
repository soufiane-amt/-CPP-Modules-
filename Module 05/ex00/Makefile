# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:15:03 by samajat           #+#    #+#              #
#    Updated: 2022/10/01 18:05:50 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CHO

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = Bureaucrat.hpp GradeTooHighException.hpp GradeTooLowException.hpp

FILES = Bureaucrat main GradeTooHighException GradeTooLowException

OBJ = $(FILES:=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all