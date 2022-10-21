# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samajat <samajat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 20:35:53 by samajat           #+#    #+#              #
#    Updated: 2022/10/21 14:24:49 by samajat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

TESTFILES = test/WrongAnimal test/WrongCat

FILES = Animal Cat Dog $(TESTFILES)


OBJ = $(FILES:=.o) main.o

HEADER = $(FILES:=.hpp)

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