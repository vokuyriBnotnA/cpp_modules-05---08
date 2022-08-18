NAME = ex01

FLAGS = -Wall -Wextra -Werror -std=c++98

CXX = @clang++ $(FLAGS)

SRCS =	Data_new.cpp Data.cpp main.cpp

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
			$(CXX) $(OBJ) -o $(NAME)
			
clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
