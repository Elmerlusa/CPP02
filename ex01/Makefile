# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 18:58:31 by javmarti          #+#    #+#              #
#    Updated: 2023/04/27 18:58:31 by javmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixedPoint

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

CPPF = main.cpp Fixed.cpp
CPPO = ${CPPF:.cpp=.o}

RM = rm -rf
########################################################
.PHONY: all re fclean clean
########################################################
all:		${NAME}

test:		${NAME}
		./${NAME}

${NAME}:	${CPPO}
		${CPP} ${FLAGS} ${CPPO} -o ${NAME}

%.o: 		%.cpp
		$(CPP) $(FLAGS) -c $< -o $@

re:			fclean all

fclean:		clean
		${RM} ${NAME}

clean:
		${RM} ${CPPO}
########################################################