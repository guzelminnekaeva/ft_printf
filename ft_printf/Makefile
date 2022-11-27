CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f
LIB		= ar -rcs

NAME	= libftprintf.a

INCLUDE	= libft.h
SRC		= 	ft_itoa.c ft_printf.c	ft_hex.c	ft_putchar.c

OBJ		= $(SRC:.c=.o)


.PHONY: 	all clean fclean re 

all: 	$(NAME)

$(NAME):	$(OBJ)
			$(LIB) $(NAME) $(OBJ)

%.o:%.c		$(INCLUDE)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ) 

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all
