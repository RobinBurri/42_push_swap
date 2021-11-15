/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:45:34 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 14:22:32 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../helpers/helpers.h"

typedef struct node {
	int			value;
	struct node	*next;
}	t_node;

typedef t_node	*t_stack;

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

#endif