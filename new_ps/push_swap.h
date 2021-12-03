/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:39:16 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 14:36:07 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct node {
	int			v;
	int			i;
	int			b;
	struct node	*n;
	struct node	*p;
}	t_node;

// helpers:
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
int		ft_is_int(const char *str);
int		ft_isdigit(int c);
void	ft_swap(int *ptr1, int *ptr2);
void	ft_print_stack(t_node *stack);
int		ft_stklen(t_node *stack);
// basic_op
void	ft_pop(t_node **stack);
int		ft_push(t_node **stack, int value, int index, int batch);
void	push_a(t_node **a, t_node **b, int batch);
void	push_b(t_node **a, t_node **b, int batch);
void	rev_rotate_a(t_node **a);
void	rev_rotate_b(t_node **b);
void	rotate_a(t_node **a);
void	rotate_b(t_node **b);
void	rr(t_node **a, t_node **b);
void	rrr(t_node **a, t_node **b);
void	ss(t_node **a, t_node **b);
void	swap_a(t_node **stack);
void	swap_b(t_node **stack);
// op
int		ft_check_and_load(int argc, char **argv, t_node **a);

#endif