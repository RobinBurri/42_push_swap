/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:28:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 13:45:38 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define STACK_EMPTY INT_MIN

typedef struct node {
	int			v;
	int			i;
	int			b;
	struct node	*n;
}	t_node;

typedef t_node	*t_stack;

void    ft_first_round(t_stack *a, t_stack *b);
int		ft_max_bat(t_stack *a);
void	ft_sort_big(t_stack *a, t_stack *b);
void	ft_sort_small(t_stack *a, t_stack *b);
void	ft_print_stack(t_stack *mystack);
void	ft_sort_three(t_stack *a);
void	ft_sort_four(t_stack *a, t_stack *b, int len);
void	ft_sort_push(t_stack *a);
int		ft_stklen(t_stack *mystack);
int		ft_stklen_batch(t_stack *a, int batch);
int		ft_sorted(t_stack *stack);
int		ft_rev_sorted(t_stack *stack);
int		ft_stklen(t_stack *mystack);
int 	ft_len_minus_sorted(t_stack *a, int i);
void	ft_sort_a(t_stack *a, t_stack *b);
void 	ft_sort_b(t_stack *a, t_stack *b);
int 	ft_no_batch(t_stack *b, int batch);
int 	ft_max_ind_bat(t_stack *a, int batch);
int 	ft_min_bat(t_stack *a);
int		ft_has_two_left(t_stack *a, t_stack *b, int batch);
void 	ft_find_and_send_a(t_stack *a, t_stack *b, int mid, int batch, int *i);
int 	ft_get_before_last_el_index(t_stack *a);
int		ft_min_ind_bat(t_stack *a, int batch);
int 	ft_last_el_bat(t_stack *a);
// helpers:
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
int		ft_is_int(const char *str);
int		ft_isdigit(int c);
void	ft_swap(int *ptr1, int *ptr2);
void	ft_print_stack(t_stack *mystack);
// op
void	ft_pop(t_stack *mystack);
int		ft_push(t_stack *mystack, int value, int index, int batch);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
void	push_a(t_stack *a, t_stack *b, int batch);
void	push_b(t_stack *a, t_stack *b, int batch);
void	rotate_b(t_stack *b);
void	rotate_a(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rrr(t_node **a, t_node **b);
void	rev_rotate_a(t_stack *a);
void	rev_rotate_b(t_stack *b);
int		ft_min_index(t_stack *a);
int		ft_check_and_load(int argc, char **argv, t_stack *a);
int		ft_get_last_el_index(t_stack *a);
int		ft_last_index(t_node **a);
int	ft_has_bat_left(t_node *stack, int batch);
int		ft_is_sorted(t_node **stack);
int	ft_has_two_bat(t_node *stack);

#endif