NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = gcc -c  

SRCS	= helpers/ft_atoi.c helpers/ft_has_double.c helpers/ft_is_int.c \
		 helpers/ft_isdigit.c helpers/ft_putchar.c helpers/ft_putnbr.c \
		 helpers/ft_putstr.c helpers/ft_swap.c \
		 op/ft_check_and_load.c op/ft_pop.c op/rrr.c op/ss.c op/rr.c \
		 op/ft_push.c op/push_a.c op/push_b.c op/swap_a.c op/swap_b.c \
		 op/rev_rotate_a.c op/rev_rotate_b.c op/rotate_a.c op/rotate_b.c \
		list_stack.c \

OBJS = $(SRCS:%.c=%.o)

%.o: %.c
			$(CC) $(FLAGS) $< -o $@ 

$(NAME):	$(OBJS)
			$(CC) $< -o $(NAME) 
			
all: $(NAME)

clean:
		/bin/rm -f $(OBJS)

fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re