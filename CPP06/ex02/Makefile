# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkieth <jkieth@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 22:03:23 by jkieth            #+#    #+#              #
#   Updated: 2022/03/22 16:13:05 by jkieth           ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME	=	test

SRCS	=	main.cpp A.cpp

CC		=	clang++

WWW		=	-Wall -Wextra -Werror -std=c++98

HEAD	= 	A.hpp

OBJS	=	${SRCS:.cpp=.o}

.PHONY: all clean fclean re

.c.o:
	$(CC) $(WWW) -c $< -o $@

$(NAME): $(SRCS) $(OBJS) $(HEAD)
	$(CC) $(FLAGS) $(WWW) $(OBJS) -I $(HEAD) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all