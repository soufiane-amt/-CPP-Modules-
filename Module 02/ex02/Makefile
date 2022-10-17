# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:09:26 by samajat           #+#    #+#              #
#    Updated: 2022/09/17 14:19:06 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

FILES = Fixed

OBJ = $(FILES:=.o) main.o

HEADERS = $(FILES:=.hpp)


all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) a.out

re : fclean all