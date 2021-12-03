SRCFILES=	ft_putnbr_fd.c			\
			ft_putstr_fd.c			\
			ft_putchar_fd.c	\
			ft_putunsgnbr_fd.c		\
			ft_puthex_fd.c		\
			ft_putaddress_fd.c		\
			ft_printf.c  

HEADFILES=	ft_printf.h

F= ${SRCFILES}

O= ${F:.c=.o}

OBJFILES= ${SRCFILES:.c=.o}

NAME= libftprintf.a

CC= gcc

%.o:	%.c ${HEADFILES}
		${CC} -Wall -Wextra -Werror -c $< -o $@

${NAME}:	${OBJFILES}
			${AR} rcs $@ ${OBJFILES}

all: ${NAME}

clean: 
	${RM} ${OBJFILES} ${O}

fclean: clean
	${RM} ${NAME}

re: fclean all
        
.PHONY: all clean fclean re 