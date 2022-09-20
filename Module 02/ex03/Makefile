# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:09:26 by samajat           #+#    #+#              #
#    Updated: 2022/09/20 14:42:09 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

FILES = Fixed main Point bsp

OBJ = $(FILES:=.o)


all : $(OBJ)
	$(CC) $(FLAGS) $(OBJ)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) a.out

re : fclean all