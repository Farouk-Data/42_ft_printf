SRC = ft_printf.c	\
	ft_printf_utils.c	\

OBJS = $(SRC:.c=.o)

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

%.o :%.c printf.h
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
