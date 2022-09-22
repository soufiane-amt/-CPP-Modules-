# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 21:33:19 by samajat           #+#    #+#              #
#    Updated: 2022/09/22 15:07:52 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HarlFilter

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Harl main

RM = rm -rf

HEADER = Harl.hpp

OBJ = $(FILES:=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
