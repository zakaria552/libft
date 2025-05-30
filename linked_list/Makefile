CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJFILES = $(CFILES:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJFILES)
	ar rcs $@ $^

%.o: %.c
	@echo "Converting $< to $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJFILES) $(B_OBJFILES) .bonus

fclean: clean
	rm -f $(NAME)
	
re: fclean all