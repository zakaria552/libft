FILES=get_next_line.c get_next_line_utils.c
OBJ=$(addprefix ../obj/, $(FILES:.c=.o))
FLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(OBJ)

../obj/%.o	: %.c
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
