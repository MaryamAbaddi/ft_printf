
SRC = ft_printf.c ft_upperh.c ft_putstr.c ft_putptr.c ft_putnbr.c \
	ft_putchar.c ft_lowerh.c ft_unsigned.c \

NAME = libftprintf.a

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 


all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
