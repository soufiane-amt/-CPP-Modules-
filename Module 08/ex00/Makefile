# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 20:54:07 by samajat           #+#    #+#              #
#    Updated: 2022/11/07 21:05:23 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = find

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

HEADER = easyfind.hpp

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