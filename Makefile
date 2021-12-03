SRCFILES=	Libft/ft_putnbr_fd.c			\
			Libft/ft_putendl_fd.c	\
			Libft/ft_putstr_fd.c			\
			Libft/ft_putchar_fd.c	\
			Libft/ft_striteri.c			\
			Libft/ft_strmapi.c			\
			Libft/ft_itoa.c			\
			Libft/ft_substr.c			\
			Libft/ft_split.c			\
			Libft/ft_strjoin.c			\
			Libft/ft_atoi.c			\
			Libft/ft_bzero.c			\
			Libft/ft_calloc.c			\
			Libft/ft_isalnum.c			\
			Libft/ft_isalpha.c			\
			Libft/ft_isascii.c			\
			Libft/ft_isdigit.c			\
			Libft/ft_isprint.c			\
			Libft/ft_memchr.c			\
			Libft/ft_memcmp.c			\
			Libft/ft_memcpy.c			\
			Libft/ft_memmove.c			\
			Libft/ft_memset.c			\
			Libft/ft_strchr.c			\
			Libft/ft_strdup.c			\
			Libft/ft_strlcat.c			\
			Libft/ft_strlcpy.c			\
			Libft/ft_strlen.c			\
			Libft/ft_strncmp.c			\
			Libft/ft_strtrim.c			\
			Libft/ft_strnstr.c			\
			Libft/ft_strrchr.c			\
			Libft/ft_tolower.c			\
			Libft/ft_toupper.c			\
			Libft/ft_putunsgnbr_fd.c		\
			Libft/ft_puthex_fd.c

BONUSFILES= Libft/ft_lstnew.c       \
			Libft/ft_lstadd_front.c \
			Libft/ft_lstsize.c      \
			Libft/ft_lstlast.c      \
			Libft/ft_lstadd_back.c  \
			Libft/ft_lstdelone.c    \
			Libft/ft_lstclear.c     \
			Libft/ft_lstiter.c      \
			Libft/ft_lstmap.c

HEADFILES= libft.h

F= ${SRCFILES} ${BONUSFILES}

O= ${F:.c=.o}

OBJFILES= ${SRCFILES:.c=.o}

NAME= libft.a

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

rebonus: fclean bonus

bonus:   ${O}
	ar rcs ${NAME} ${O}
        
.PHONY: all clean fclean re rebonus bonus