# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 09:26:04 by psaulnie          #+#    #+#              #
#    Updated: 2022/08/24 08:52:07 by psaulnie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS = ${SRCS:.cpp=.o}
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = intern

.PHONY:	all clean fclean re

all: ${NAME}

%.o:	%.cpp
		${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}


clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all