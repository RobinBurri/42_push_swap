/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:56:16 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 14:23:09 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	r_a(t_node **a)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *a;
	tmp_end = *a;
	while (tmp_end->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n = *a;
	*a = tmp_head->n;
	tmp_end->n->n = NULL;
}

static void	r_b(t_node **b)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *b;
	tmp_end = *b;
	while (tmp_end->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n = *b;
	*b = tmp_head->n;
	tmp_end->n->n = NULL;
}

void	rr(t_node **a, t_node **b)
{
	r_a(a);
	r_b(b);
	ft_putstr("rr\n");
}
