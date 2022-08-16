NAME		=		DiamondTrap

SRC			=		ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

OBJ			=		$(SRC:.cpp=.o)

FLAG		=		-Wall -Wextra -Werror -std=c++98

.PHONY		:		all clean fclean re

all			:		$(NAME)

$(NAME)		:		$(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	c++ $(FLAG) $(OBJ) -o $(NAME)

clean		:
	@rm -f $(OBJ)

fclean		:	clean
	@rm -f $(NAME)

re			:	fclean all
