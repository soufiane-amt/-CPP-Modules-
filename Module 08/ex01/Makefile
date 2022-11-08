# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 00:48:30 by samajat           #+#    #+#              #
#    Updated: 2022/11/08 00:49:04 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

HEADER = Span.hpp

FILES = main Span.cpp

OBJ = $(FILES:=.o)

$(NAME) : all

all: $(OBJ) 
		$(CC) $(FLAGS) $(OBJ)  -o $(NAME) 

%.o : %.cpp $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@ 

clean : 
		$(RM) $(OBJ)

fclean :clean
		$(RM) $(NAME)

re : fclean all