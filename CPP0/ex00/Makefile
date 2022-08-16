NAME		=		megaphone

SRC			=		megaphone.cpp

OBJ			=		$(SRC:.cpp=.o)

CFLAG		=		-Wall -Wextra -Werror -std=c++98

.PHONY		:		all clean fclean re

all			:		$(NAME)

$(NAME)		:		$(OBJ)
	c++ $(CFLAG) $(OBJ) -o $(NAME)

clean		:
	@rm -f $(OBJ)

fclean		:	clean
	@rm -f $(NAME)

re			:	fclean all
