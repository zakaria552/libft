# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zfarah <zfarah@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 08:51:26 by zfarah            #+#    #+#              #
#    Updated: 2025/04/30 10:32:13 by zfarah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
CFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_itoa.c ft_uitoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

B_CFILES = ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJFILES = $(CFILES:.c=.o)
B_OBJFILES = $(B_CFILES:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJFILES)
	ar rcs $@ $^

bonus : .bonus
    
.bonus : $(OBJFILES) $(B_OBJFILES)
	@touch .bonus;
	ar -rcs $(NAME) $(OBJFILES) $(B_OBJFILES)

%.o: %.c
	@echo "Converting $< to $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJFILES) $(B_OBJFILES) .bonus

fclean: clean
	rm -f $(NAME)
	
re: fclean all
