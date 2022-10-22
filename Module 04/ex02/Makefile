# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 20:35:53 by samajat           #+#    #+#              #
#    Updated: 2022/10/22 19:46:56 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal3

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Animal Brain Cat Dog main

OBJ = $(FILES:=.o)

HEADER = Animal.hpp Brain.hpp Cat.hpp Dog.hpp

RM = rm -rf

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all