# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 20:35:53 by samajat           #+#    #+#              #
#    Updated: 2022/09/27 20:04:28 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Animal Cat Dog main

OBJ = $(FILES:=.o)

HEADER = Animal.hpp Cat.hpp Dog.hpp

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