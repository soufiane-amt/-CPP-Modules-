# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 20:37:13 by samajat           #+#    #+#              #
#    Updated: 2022/08/27 13:27:12 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

FILES = MyPhoneBook

OBJ  = $(FILES:=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(OBJ) $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) $< -c $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all