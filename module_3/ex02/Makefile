# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 11:01:25 by pierrot           #+#    #+#              #
#    Updated: 2022/08/24 09:18:59 by psaulnie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INCS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJS = ${SRCS:.cpp=.o}
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = fragtrap

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