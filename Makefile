# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 14:25:02 by dasouzda          #+#    #+#              #
#    Updated: 2024/12/16 14:28:16 by dasouzda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_count.c ft_putnbr_count.c ft_putstr_count.c \
ft_putnbr_base_count.c ft_putptr_count.c ft_putunsigned_count.c

OBJ = $(SRC:.c=.o)

INCL = -I/.

CFLAGS = -Wall -Wextra -Werror $(INCL)

CC = cc

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonuscleanc