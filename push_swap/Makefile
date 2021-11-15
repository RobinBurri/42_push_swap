# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rburri <rburri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 15:28:25 by rburri            #+#    #+#              #
#    Updated: 2021/11/15 16:25:09 by rburri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	=	push_swap

CC		=	gcc $(CFLAGS)

CFLAGS	=	-Wall -Wextra -Werror

SRC	=	 list_stack.c \
		 /helpers/ft_atoi.c /helpers/ft_has_double.c /helpers/ft_is_int.c \
		 /hlepers/ft_isdigit.c /helpers/ft_putchar.c /helpers/ft_putnbr.c \
		 /helpers/ft_putstr.c /helpers/swap.c \
		 /op/ft_check_and_load.c /op/ft_pop.c /op/rrr.c /op/ss.c /op/rr.c \
		 /op/ft_push.c /op/push_a.c /op/push_b.c /op/swap_a.c /op/swap_b.c \
		 /op/rev_rotate_a.c /op/rev_rotate_b.c /op/rotate_a.c /op/rotate_b.c \

OBJS	=	$(SRC:.c=.o)

%.o: %.c
			$(CC) -o $@ -c $<

$(NAME)	=	$(OBJS)
			$(CC) -o $(OBJS)
			
all	:	$(NAME)

clean:
			/bin/rm -f $(OBJS)

fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re