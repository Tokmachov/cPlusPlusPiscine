#########support vars start#####################
SRCS_DIR = srcs/
SRCS_MAIN = $(addprefix main/, main.cpp)
SRCS_CONTACT = $(addprefix contact/, Contact.cpp)
SRCS_CRAPPY_IO = $(addprefix crappy_io/, crappy_io.cpp)
SRCS_PHONEBOOK = $(addprefix phonebook/, Phonebook.cpp)
#########support vars end#######################

NAME = phonebook

SRCS = $(addprefix $(SRCS_DIR), $(SRCS_MAIN) $(SRCS_CONTACT) $(SRCS_CRAPPY_IO) \
	$(SRCS_PHONEBOOK))

OBJS = $(SRCS:.cpp=.o)

HEADERS = srcs/headers/*.hpp

CC = clang++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -c

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -Isrcs/headers $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

remove_odd_objs:
	find . -name "*.o" -type f -delete

run: all
	./$(NAME)