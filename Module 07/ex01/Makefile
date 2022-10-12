# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 17:40:45 by samajat           #+#    #+#              #
#    Updated: 2022/10/12 17:41:08 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJ = main.o

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