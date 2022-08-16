NAME		=		zombieHorde

SRC			=		main.cpp Zombie.cpp zombieHorde.cpp

OBJ			=		$(SRC:.cpp=.o)

CFLAG		=		-Wall -Wextra -Werror -std=c++98

.PHONY		:		all clean fclean re

all			:		$(NAME)

$(NAME)		:		$(OBJ) Zombie.hpp
	c++ $(CFLAG) $(OBJ) -o $(NAME)

clean		:
	@rm -f $(OBJ)

fclean		:	clean
	@rm -f $(NAME)

re			:	fclean all
