/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:28:01 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:17:58 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define STACK_EMPTY INT_MIN

typedef struct node {
	int			v;
	struct node	*n;
}	t_node;

typedef t_node	*t_stack;

void	ft_print_stack(t_stack *mystack);
int		ft_stklen(t_stack *mystack);
int		ft_sorted(t_stack *stack);
void	ft_sort(t_stack *a, t_stack *b);
int		ft_stklen(t_stack *mystack);
void	ft_sort_three(t_stack *a);
void	ft_sort_five(t_stack *a, t_stack *b);

// helpers:
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
int		ft_is_int(const char *str);
int		ft_isdigit(int c);
int		ft_has_double(int array[], int len);
void	ft_swap(int *ptr1, int *ptr2);
// op
int		ft_pop(t_stack *mystack);
int		ft_push(t_stack *mystack, int value);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	rotate_b(t_stack *b);
void	rotate_a(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rev_rotate_a(t_stack *a);
void	rev_rotate_b(t_stack *b);
int		ft_check_and_load(int argc, char **argv, t_stack *a);

#endif