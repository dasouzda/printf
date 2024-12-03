NAME = ft_printf.a

SRC = ft_printf.c ft_putchar_count.c

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