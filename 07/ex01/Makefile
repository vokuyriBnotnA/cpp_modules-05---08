# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/05 21:37:07 by llawrenc          #+#    #+#              #
#    Updated: 2022/08/05 21:37:07 by llawrenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= iter
HEADER	= iter.hpp
SRC		= main.cpp
OBJ		= $(SRC:%.cpp=%.o)
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY	: all clean fclean re

all		: $(NAME)

%.o		: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all