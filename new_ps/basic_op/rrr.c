/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:57:19 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 14:23:16 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rev_rot_a(t_node **a)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *a;
	tmp_end = *a;
	while (tmp_end->n->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n->n = tmp_head;
	(*a) = tmp_end->n;
	tmp_end->n = NULL;
}

static void	rev_rot_b(t_node **b)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *b;
	tmp_end = *b;
	while (tmp_end->n->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n->n = tmp_head;
	(*b) = tmp_end->n;
	tmp_end->n = NULL;
}

void	rrr(t_node **a, t_node **b)
{
	rev_rot_a(a);
	rev_rot_b(b);
	ft_putstr("rrr\n");
}
