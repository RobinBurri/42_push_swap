/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:03:28 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:31:57 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_sort_4(t_node *a)
{
	if (a->v > a->n->v && a->v < a->n->n->v)
		swap_a(a);
	if (a->v > a->n->n->n->v)
		rotate_a(a);
	if (a->v > a->n->n->v && a->v < a->n->n->n->v)
	{
		rev_rotate_a(a);
		swap_a(a);
		rotate_a(a);
		rotate_a(a);
	}
}

static void	ft_sort_5(t_node *a)
{
	if (a->v > a->n->v && a->v < a->n->n->v)
		swap_a(a);
	if (a->v > a->n->n->n->n->v)
		rotate_a(a);
	if (a->v > a->n->n->v && a->v < a->n->n->n->v)
	{
		rev_rotate_a(a);
		swap_a(a);
		rev_rotate_a(a);
		swap_a(a);
		rev_rotate_a(a);
		rev_rotate_a(a);
	}
	if (a->v > a->n->n->n->v && a->v < a->n->n->n->n->v)
	{
		rev_rotate_a(a);
		swap_a(a);
		rotate_a(a);
		rotate_a(a);
	}
}

void	ft_sort_push(t_node *a)
{
	int	len;

	len = ft_stklen(a);
	if (ft_sorted(a) == 1)
		return ;
	if (len == 4)
		ft_sort_4(a);
	else if (len == 5)
		ft_sort_5(a);
}
