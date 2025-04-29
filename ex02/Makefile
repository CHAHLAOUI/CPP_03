# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 03:27:29 by achahlao          #+#    #+#              #
#    Updated: 2025/04/29 00:24:34 by achahlao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serena
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = main.cpp FragTrap.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp FragTrap.hpp ClapTrap.hpp
	c++ $(FLAGS) $(VERSION) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all