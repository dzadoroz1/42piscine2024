# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 17:43:59 by dzadoroz          #+#    #+#              #
#    Updated: 2024/10/08 11:15:07 by dzadoroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS		= ${SCRS:.c=.o}

NAME		= libft.a

CC			= gcc -Wall -Wextra -Werror

.c.o:
			${CC} -I includes -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
