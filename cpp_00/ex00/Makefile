NAME = megaphone

SRC = srcs/megaphone.cpp

CC = clang++

FLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $@

fclean:
	rm -f $(NAME)

re: fclean all