# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/09 14:21:21 by adrienlan         #+#    #+#              #
#    Updated: 2020/10/09 14:21:25 by adrienlan        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	$(wildcard ./srcs/*.c)

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

HEADER =	-I./

RM		=	rm -f

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}

.c.o:
			${CC} -c ${CFLAGS} $< -o $@ ${HEADER}

all:		${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
