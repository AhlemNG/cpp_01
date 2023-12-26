# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 14:29:57 by anouri            #+#    #+#              #
#    Updated: 2023/12/26 15:41:45 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = UnnecessaryViolence

SRCS = main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp \
	
OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.c 
		${CC} ${FLAGS} -cpp $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re