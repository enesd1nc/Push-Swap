
NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBFT = libft/libft.a

SRC = push_swap.c \
         ac1.c \
         ac2.c \
         radix.c \
         sort.c \
         functions1.c \
         functions2.c \
         find.c


OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS)  $(OBJS) -o $(NAME) $(LIBFT)


$(LIBFT):
	@$(MAKE) -C libft
clean:
		@$(MAKE) -C libft clean
		@rm -f  $(OBJS)

fclean: clean
		@$(MAKE) -C libft fclean
		@rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean all