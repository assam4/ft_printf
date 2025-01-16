# PROJECT NAME
NAME = libftprintf.a

# COMPILER PARAMS
CC = cc
INCLUDES = -I./libft -lft -Llibft
CFLAGS = -Wall -Wextra -Werror

# ARCHIVE UNZIP
AR = ar rcs

# SOURCES
SRC = ft_printf.c ft_printf_utils.c

# OBJECTS
OBJS = $(SRC:%.c=%.o)
LIBFT_OBJS = $(LIBFT_SRC:%.c=libft/%.o) # Получаем объектные файлы для libft

# LIBFT
LIBFT = ./libft/libft.a

# GENERAL TARGET
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS) # linking objs and libft
#$(AR) $(NAME) $(OBJS)
	ar x libft/libft.a
	$(AR) $(NAME)  *.o
	# creating static library libftprintf.a

# Compile libft first
$(LIBFT):
	$(MAKE) -C ./libft

%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

# Clean up
clean:
	rm -rf $(OBJS)
	$(MAKE) -C ./libft clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re

