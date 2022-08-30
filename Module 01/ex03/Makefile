# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 22:36:24 by samajat           #+#    #+#              #
#    Updated: 2022/08/30 17:12:55 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = armors

CC = c++

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

HEADERS = HumanA HumanB Weapon

FILES = HumanA HumanB Weapon main

OBJ = $(FILES:=.o)

$(NAME) : all

all : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS)  -c $< -o $@ -I 

clean :
	$(RM) $(OBJ)

flcean :clean
	$(RM) $(NAME)

re : flcean all
