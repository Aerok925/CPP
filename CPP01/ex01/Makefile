NAME = zombie

SRCS = 	main.cpp Zombie.cpp zombieHorde.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = Zombie.hpp

OBJS = ${SRCS:.cpp=.o}

.PHONY: all fclean re

.c.o:
	$(CC) -c ${FLAGS} -I$(INCLUDES) $*.c -o $*.o

$(NAME): $(SRCS) $(OBJS) $(INCLUDES)
	$(CC) ${FLAGS} -I$(INCLUDES) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all