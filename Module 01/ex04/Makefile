# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 16:19:05 by samajat           #+#    #+#              #
#    Updated: 2022/09/09 16:28:16 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_sed

CC  = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main replaceUtils

HEADER = replace.hpp

RM = rm -rf

OBJ = $(FILES:=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all