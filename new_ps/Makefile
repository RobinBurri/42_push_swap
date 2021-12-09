NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = gcc -c  

SRCS	= helpers/ft_atoi.c		helpers/ft_is_int.c		helpers/ft_swap.c \
		 helpers/ft_isdigit.c	helpers/ft_putchar.c	helpers/ft_putnbr.c \
		 helpers/ft_putstr.c \

		 basic_op/ft_pop.c		basic\
		 basic_op/rrr.c					basic_op/ss.c basic_op/rr.c \
		 basic_op/ft_push.c				basic_op/push_a.c basic_op/push_b.c 
		 basic_op/swap_a.c basic_op/swap_b.c \
		 basic_op/rev_rotate_a.c basic_op/rev_rotate_b.c basic_op/rotate_a.c basic_op/rotate_b.c \
		list_stack.c \basic_op/ft_check_and_load.c

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