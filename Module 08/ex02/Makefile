# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 21:19:47 by samajat           #+#    #+#              #
#    Updated: 2022/11/08 21:29:45 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantStack

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

HEADER = MutantStack.hpp

FILES = main

OBJ = $(FILES:=.o)

$(NAME) : all

all: $(OBJ) 
		$(CC) $(FLAGS) $(OBJ)  -o $(NAME) 

%.o : %.cpp $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@ 

clean : 
		$(RM) $(OBJ)

fclean :clean
		$(RM) $(NAME)

re : fclean all