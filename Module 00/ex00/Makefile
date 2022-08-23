# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 17:23:05 by samajat           #+#    #+#              #
#    Updated: 2022/08/23 17:47:23 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mega

CC = c++

FLAGS = -Wall -Wextra -Werror

FILES = megaphone

OBJ = $(FILES:=.o)

RM = rm -rf

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp
	echo $@
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all