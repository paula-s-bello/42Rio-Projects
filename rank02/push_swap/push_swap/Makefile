NAME	= push_swap

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c \
		split.c \
		split_utils.c \
		small_sort.c \
	  parsing.c \
	  stack.c \
	  index.c \
	  operations_swap.c \
	  operations_push.c \
	  operations_rotate.c \
	  chunk_sort.c \
	  utils.c

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
