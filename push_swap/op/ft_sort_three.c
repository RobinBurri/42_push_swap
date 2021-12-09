/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:33:44 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 15:51:05 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_node **a)
{
	t_node	*t;

	t = *a;
	if (t->v > t->n->v && t->v < t->n->n->v
		&& t->n->v < t->n->n->v)
		swap_a(a);
	else if (t->v > t->n->v && t->v > t->n->n->v
		&& t->n->v < t->n->n->v)
		rotate_a(a);
	else if (t->v < t->n->v && t->v > t->n->n->v
		&& t->n->v > t->n->n->v)
		rev_rotate_a(a);
	else if (t->v > t->n->v && t->v > t->n->n->v
		&& t->n->v > t->n->n->v)
	{
		swap_a(a);
		rev_rotate_a(a);
	}
	else if (t->v < t->n->v && t->v < t->n->n->v
		&& t->n->v > t->n->n->v)
	{
		swap_a(a);
		rotate_a(a);
	}
	return ;
}
