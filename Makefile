NAME = libftprintf.a

SRC = ft_printf.c ft_printf_conversion.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c ft_putnbr_hex_lower.c ft_putnbr_hex_upper.c ft_putnbr_unsigned.c 

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Werror -Wextra

AR = ar -rcs

DEL = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	
clean: 
	$(DEL) $(OBJ)

fclean: clean
	$(DEL) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
