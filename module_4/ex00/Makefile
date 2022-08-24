# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 11:01:25 by pierrot           #+#    #+#              #
#    Updated: 2022/08/24 09:18:25 by psaulnie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongDog.cpp WrongCat.cpp
INCS = Cat.hpp Dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp WrongDog.hpp
OBJS = ${SRCS:.cpp=.o}
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = animal

.PHONY:	all clean fclean re

all: ${NAME}

%.o:	%.cpp ${INCS}
		${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}


clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all