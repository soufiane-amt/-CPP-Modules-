# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 13:44:36 by samajat           #+#    #+#              #
#    Updated: 2022/08/29 14:34:08 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

HEADER = Zombie

FILES = Zombie main randomChump newZombie

OBJ = $(FILES:=.o)


$(NAME) : all

all: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(HEADER)

%.o : %.cpp
	$(CC) $(FLAGS) $< -o $@

clean : 
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)

re : fclean all

