NAME		=		unnecessaryViolence

SRC			=		main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ			=		$(SRC:.cpp=.o)

CFLAG		=		-Wall -Wextra -Werror -std=c++98

.PHONY		:		all clean fclean re

all			:		$(NAME)

$(NAME)		:		$(OBJ) Weapon.hpp HumanA.hpp HumanB.hpp
	c++ $(CFLAG) $(OBJ) -o $(NAME)

clean		:
	@rm -f $(OBJ)

fclean		:	clean
	@rm -f $(NAME)

re			:	fclean all
