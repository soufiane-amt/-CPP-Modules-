# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 23:34:16 by samajat           #+#    #+#              #
#    Updated: 2022/10/13 14:03:20 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJ = main.o

FILES = Array

HEADERS = $(FILES:=.hpp)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@ 

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)
re : fclean all