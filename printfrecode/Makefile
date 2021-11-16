NAME = libftprintf.a

SRC =	ft_printf.c		\
		ft_checkvar.c	\
		main.c			\

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

%.o:%.c
		${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJ}
		ar rcs ${NAME} ${OBJ}

all : ${NAME}

clean:
		rm -rf ${OBJ}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
