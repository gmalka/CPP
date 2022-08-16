NAME		=		Animal

SRC			=		Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

OBJ			=		$(SRC:.cpp=.o)

FLAG		=		-Wall -Wextra -Werror -std=c++98

.PHONY		:		all clean fclean re

all			:		$(NAME)

$(NAME)		:		$(OBJ) Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	c++ $(FLAG) $(OBJ) -o $(NAME)

clean		:
	rm -f $(OBJ)

fclean		:	clean
	rm -f $(NAME)

re			:	clean all
