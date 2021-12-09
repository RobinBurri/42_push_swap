# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rburri <rburri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 12:26:57 by rburri            #+#    #+#              #
#    Updated: 2021/12/09 18:47:19 by rburri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRCS	= \
		helpers/ft_atoi.c		helpers/ft_is_int.c		helpers/ft_swap.c \
		helpers/ft_isdigit.c	helpers/ft_putchar.c	helpers/ft_putnbr.c \
		helpers/ft_putstr.c 	helpers/ft_split.c		helpers/ft_putstr2.c \
		basic_op/ft_pop.c		basic_op/ft_print_stack.c \
		basic_op/ft_stklen.c	basic_op/ft_stklen_bat.c	basic_op/ft_push.c \
		basic_op/push_a.c		basic_op/push_b.c 			basic_op/rr.c \
		basic_op/rev_rotate_a.c	basic_op/rev_rotate_b.c		basic_op/rrr.c \
		basic_op/rotate_a.c		basic_op/rotate_b.c 		basic_op/ss.c \
		basic_op/swap_a.c 		basic_op/swap_b.c	\
		op/ft_check_and_load.c 	op/ft_last_index.c 			op/ft_min_bat.c \
		op/ft_min_ind_bat.c		op/ft_rev_sorted.c 			op/ft_max_bat.c \
		op/ft_last_el_bat.c 	op/ft_before_last_index.c 	op/ft_find_mid.c \
		op/ft_b_has_two_left.c 	op/ft_a_has_two_left.c 		op/ft_sort_b.c \
		op/ft_big_follow.c 		op/ft_big_start.c 			op/ft_sort_big.c \
		op/ft_sort_small.c 		op/ft_sort_three.c 			op/ft_sort_ff.c \
		op/ft_sort_push.c 		op/ft_find_and_send_a.c 	op/ft_is_sorted.c \
		op/ft_has_bat_left.c	op/ft_has_double.c	\
		op/ft_check_and_load2.c	\
		main.c

OBJS = $(SRCS:%.c=%.o)

%.o: %.c
			$(CC) -c $(FLAGS) $< -o $@ 

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME) 
			
all: $(NAME)

clean:
		/bin/rm -f $(OBJS)

fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re