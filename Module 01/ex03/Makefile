# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 22:36:24 by samajat           #+#    #+#              #
#    Updated: 2022/09/26 13:23:11 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = armors

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = HumanA HumanB Weapon

FILES = HumanA HumanB Weapon main

OBJ = $(FILES:=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS)  -c $< -o $@ -I 

clean:
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
