/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:50:50 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:30:46 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	ft_sort_three(t_node *a)
{
	t_node	*t;

	t = a;
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
