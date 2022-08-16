NAME		=		swaff

SRC			=		main.cpp

OBJ			=		$(SRC:.cpp=.o)

FLAG		=		-Wall -Wextra -Werror -std=c++98

.PHONY		:		all clean fclean re

all			:		$(NAME)

$(NAME)		:		$(OBJ) whatever.hpp
	c++ $(FLAG) $(OBJ) -o $(NAME)

clean		:
	rm -f $(OBJ)

fclean		:	clean
	rm -f $(NAME)

re			:	fclean all
