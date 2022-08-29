# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 13:44:36 by samajat           #+#    #+#              #
#    Updated: 2022/08/29 21:35:47 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieH

CC = c++

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

HEADER = Zombie.hpp

FILES = main Zombie newZombie zombieHorde

OBJ = $(FILES:=.o)

$(NAME) : all

all : $(OBJ) 
	$(CC) $(FLAGS) $(OBJ)  -o $(NAME) 

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@ 

clean : 
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)

re : fclean all

