# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 14:29:57 by anouri            #+#    #+#              #
#    Updated: 2023/12/27 15:32:06 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CopyReplace

SRCS = main.cpp \
	
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