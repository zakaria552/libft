FILES=get_next_line.c get_next_line_utils.c
BONUS_FILES=get_next_line_bonus.c get_next_line_utils_bonus.c
OBJ=$(FILES:.c=.o)
BONUS_OBJ=$(BONUS_FILES:.c=.o)
NAME=get_next_line.a
FLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=10
CC = gcc
all = $(NAME)
libft_dir = libft
libft=$(libft_dir)/libft.a

$(NAME)	: $(OBJ)
	@echo "making library $(OBJ)"
	ar rcs $@ $^

bonus: $(BONUS_OBJ)
	ar rcs $@ $^

%.o	: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ) main mainb

fclean: clean
	rm -f $(NAME) bonus

re: fclean all

mainb: bonus
	$(CC) $(FLAGS) mainb.c $^ -o mainb

main: $(NAME)
	$(CC) $(FLAGS) main.c $^ -o main
