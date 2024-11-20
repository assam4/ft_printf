# PROJECT NAME
NAME = libftprintf.a

# COMPILER PARAMS

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -I./libft

# ARCHIVE UNZIP

AR = ar rcs


SRC = ft_printf.c

OBJS = $(SRC:%.c=%.o)

LIBFT = ./libft/libft.a

# GENERAL TARGET
all: $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	rm -rf $(OBJS)
	$(MAKE) -C ./libft clean

fclean:  clean
	rm -rf $(NAME)

re:
	fclean all

.PHONY: all clean fclean re

