/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:50:50 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:16:57 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack *a)
{
	if ((*a)->v > (*a)->n->v && (*a)->v < (*a)->n->n->v
		&& (*a)->n->v < (*a)->n->n->v)
		swap_a(a);
	else if ((*a)->v > (*a)->n->v && (*a)->v > (*a)->n->n->v
		&& (*a)->n->v < (*a)->n->n->v)
		rotate_a(a);
	else if ((*a)->v < (*a)->n->v && (*a)->v > (*a)->n->n->v
		&& (*a)->n->v > (*a)->n->n->v)
		rev_rotate_a(a);
	else if ((*a)->v > (*a)->n->v && (*a)->v > (*a)->n->n->v
		&& (*a)->n->v > (*a)->n->n->v)
	{
		swap_a(a);
		rev_rotate_a(a);
	}
	else if ((*a)->v < (*a)->n->v && (*a)->v < (*a)->n->n->v
		&& (*a)->n->v > (*a)->n->n->v)
	{
		swap_a(a);
		rotate_a(a);
	}
	return ;
}
