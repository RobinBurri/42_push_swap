/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:53:37 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 16:09:25 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_a(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	if (tmp && tmp->n)
	{
		ft_swap(&tmp->v, &tmp->n->v);
		ft_swap(&tmp->i, &tmp->n->i);
		ft_swap(&tmp->b, &tmp->n->b);
	}
}

void	s_b(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	if (tmp && tmp->n)
	{
		ft_swap(&tmp->v, &tmp->n->v);
		ft_swap(&tmp->i, &tmp->n->i);
		ft_swap(&tmp->b, &tmp->n->b);
	}
}

void	ss(t_node **a, t_node **b)
{
	s_a(a);
	s_b(b);
	ft_putstr("ss\n");
}
