NAME = test

SRCS = 	main.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98


OBJS = ${SRCS:.cpp=.o}

.PHONY: all fclean re

.c.o:
	$(CC) -c ${FLAGS} $*.c -o $*.o

$(NAME): $(SRCS) $(OBJS)
	$(CC) ${FLAGS} -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all