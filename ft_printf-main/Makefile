CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libftprintf.a

SRCS= ft_printf.c utils/print_c.c utils/print_s.c \
	utils/print_i.c utils/print_hex.c utils/print_u.c utils/print_p.c

OBJS=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	mv utils/*.o ./
	@gcc -c -Wall -Werror -Wextra libft/*.c -I. libft/libft.h
	 ar -rcs $(NAME) *.o

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
