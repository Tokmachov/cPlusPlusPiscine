
NAME = iter

SRCS = test_main.cpp CustomClass.cpp 

OBJS = $(SRCS:.cpp=.o)

HEADERS = *.hpp

CC = clang++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -c -g

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -I. $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

remove_odd_objs:
	find . -name "*.o" -type f -delete