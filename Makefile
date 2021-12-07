# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 16:12:54 by tschlege          #+#    #+#              #
#    Updated: 2021/12/07 16:21:24 by tschlege         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCFILES=	ft_putnbr_fd.c			\
			ft_putstr_fd.c			\
			ft_putchar_fd.c			\
			ft_putunsgnbr_fd.c		\
			ft_puthex_fd.c			\
			ft_putaddress_fd.c		\
			ft_printf.c

HEADFILES=	ft_printf.h

OBJFILES= ${SRCFILES:.c=.o}

NAME= libftprintf.a

CC= gcc

%.o:	%.c ${HEADFILES}
		${CC} -Wall -Wextra -Werror -c $< -o $@

${NAME}:	${OBJFILES}
			${AR} rcs $@ ${OBJFILES}

all: ${NAME}

clean: 
	${RM} ${OBJFILES}

fclean: clean
	${RM} ${NAME}

re: fclean all
        
.PHONY: all clean fclean re 