CC = cc
FLAGS = -Wall -Wextra -Werror
FILES = ft_calloc.c ft_itoa.c ft_memset.c ft_printf.c ft_strlen.c ft_uitoa.c printf_handlers.c printf_handlers_utils.c
OBJ = $(FILES:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

main: all
	$(CC) main.c $(NAME) -o main

.PHONY: all clean fclean re