NAME=ft_op.a

CC=gcc

CFLAGS=-Wall -Werror -Wextra

SRC=ft_strlen.c\
    ft_strdup.c\
    ft_itoa.c\
    ft_atoi.c\
    ft_strcmp.c\
    ft_strncmp.c\
    ft_putchar.c\
    ft_op.c\
    ft_putnbr.c\
    ft_memcpy.c\
    main.c\

OBJ=$(SRC:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
