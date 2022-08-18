NAME	= easyfind
HEADER	= easyfind.hpp
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