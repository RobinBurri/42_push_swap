/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:28:01 by rburri            #+#    #+#             */
/*   Updated: 2021/11/13 21:11:31 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# define INT_MIN -2147483648
# define STACK_EMPTY INT_MIN

typedef struct node {
	int			value;
	struct node	*next;
}	t_node;

typedef t_node	*t_stack;

void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
int		ft_is_int(const char *str);
int		ft_isdigit(int c);
int		ft_has_double(int array[], int len);
int		ft_check_and_load(int argc, char **argv, t_stack *a);
int		push(t_stack *mystack, int value);
int		pop(t_stack *mystack);
void	ft_print_stack(t_stack *mystack);

#endif