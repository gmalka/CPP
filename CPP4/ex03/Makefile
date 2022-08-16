NAME		=		someName

SRC			=		AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp MateriaSource.cpp main.cpp

OBJ			=		$(SRC:.cpp=.o)

FLAG		=		-Wall -Wextra -Werror -std=c++98

.PHONY		:		all clean fclean re

all			:		$(NAME)

$(NAME)		:		$(OBJ) AMateria.hpp Character.hpp Cure.cpp Ice.hpp ICharacter.hpp MateriaSource.hpp IMateriaSource.hpp
	c++ $(FLAG) $(OBJ) -o $(NAME)

clean		:
	rm -f $(OBJ)

fclean		:	clean
	rm -f $(NAME)

re			:	fclean all
