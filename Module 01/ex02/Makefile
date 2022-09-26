# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 13:44:36 by samajat           #+#    #+#              #
#    Updated: 2022/09/26 13:11:14 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf


FILES = main 

OBJ = $(FILES:=.o)

$(NAME) : all

all: $(OBJ) 
	$(CC) $(FLAGS) $(OBJ)  -o $(NAME) 

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

clean : 
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)

re : fclean all

