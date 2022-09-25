# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 13:26:12 by samajat           #+#    #+#              #
#    Updated: 2022/09/25 15:09:06 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = ClapTrap ScavTrap main

OBJ = $(FILES:=.o)

HEADER = ClapTrap.hpp ScavTrap.hpp

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