/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:28:01 by rburri            #+#    #+#             */
/*   Updated: 2021/11/13 19:56:48 by rburri           ###   ########.fr       */
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
int		ft_atoi(const char *str);
int		ft_is_int(const char *str);
int		push(t_stack *mystack, int value);
int		pop(t_stack *mystack);

#endif