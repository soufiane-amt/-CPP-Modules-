# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 22:41:56 by samajat           #+#    #+#              #
#    Updated: 2022/10/09 15:38:58 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = conversion

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

FILES = convert

OBJ = $(FILES:=.o) main.o

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