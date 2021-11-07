NAME		=	libftprintf.a

SRC			=	ft_printf.c \
				ft_strlen.c \
				ft_putstr.c \
				ft_putchar.c \
				ft_putnb.c \
				ft_check_var.c \

OBJ		=	${SRC:.c=.o}

CC			=	gcc

CFLAGS		=	-Werror -Wall -Wextra

%.o:%.c
		${CC} ${CFLAGS} -c $< -o $@

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
