# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 13:07:57 by pdos-san          #+#    #+#              #
#    Updated: 2025/12/04 13:33:02 by pdos-san         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprint.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = 
OBJ = &(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
