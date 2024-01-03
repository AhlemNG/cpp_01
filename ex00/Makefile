# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 14:29:57 by anouri            #+#    #+#              #
#    Updated: 2024/01/03 15:30:21 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp \

OBJS = ${SRCS:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp 
		${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re