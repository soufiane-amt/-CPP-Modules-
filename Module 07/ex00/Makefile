# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 17:34:37 by samajat           #+#    #+#              #
#    Updated: 2022/11/06 14:26:16 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

OBJ = main.o

HEADERS = whatever.hpp

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