# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 18:46:03 by achahlao          #+#    #+#              #
#    Updated: 2025/04/26 11:40:21 by achahlao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Aaaaand..._OPEN!
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp ClapTrap.hpp
	c++ $(FLAGS) $(VERSION) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all