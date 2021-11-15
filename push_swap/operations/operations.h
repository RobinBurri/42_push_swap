/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:45:34 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 12:51:32 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "../helpers/helpers.h"

typedef struct node {
	int			value;
	struct node	*next;
}	t_node;

typedef t_node	*t_stack;

void 	swap_a(t_stack *stack);
void 	swap_b(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
int		ft_push(t_stack *mystack, int value);
int		ft_pop(t_stack *mystack);
void	ft_push_a(t_stack *a, t_stack *b);
void	ft_push_b(t_stack *a, t_stack *b);
void	ft_rr(t_stack *a, t_stack *b);
void	ft_rotate_b(t_stack *b);
void	ft_rotate_a(t_stack *a);

#endif