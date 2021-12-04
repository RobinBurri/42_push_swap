/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_and_send_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:45:58 by rburri            #+#    #+#             */
/*   Updated: 2021/12/04 17:09:31 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_select_best(t_node **a, t_node **b, int mid, int batch)
{
	if ((*a)->n->i < (*a)->i && (*a)->i < mid)
	{
		swap_a(a);
		push_b(a, b, batch);
		return (1);
	}
	else if (ft_last_index(a) < (*a)->i && (*a)->i < mid)
	{
		rev_rotate_a(a);
		push_b(a, b, batch);
		return (1);
	}
	else if ((*a)->i < mid)
	{
		push_b(a, b, batch);
		return (1);
	}
	return (0);
}

static void	ft_select_sec(t_node **a, t_node **b, int mid, int batch)
{
	if ((*a)->n->i < mid)
	{
		swap_a(a);
		push_b(a, b, batch);
	}
	else if (ft_last_index(a) < mid)
	{
		rev_rotate_a(a);
		push_b(a, b, batch);
	}
	else if (ft_before_last_index(a) < mid)
	{
		rev_rotate_a(a);
		rev_rotate_a(a);
		push_b(a, b, batch);
	}
	else
	{
		while ((*a)->i >= mid)
			rotate_a(a);
		push_b(a, b, batch);
	}
}

static void	ft_arrange_b(t_node **b)
{
	if (((*b)->n->b == (*b)->b) && ((*b)->n->i > (*b)->i))
		swap_b(b);
	else if ((ft_last_index(b) > (*b)->i)
		&& (ft_last_el_bat(b) == (*b)->i))
		rev_rotate_b(b);
}

void	ft_find_and_send_a(t_node **a, t_node **b)
{
	int	res;
	int	mid;
	int	b_len;
	int	batch;

	batch = ft_min_bat(a);
	mid = (ft_find_mid(a, batch) + 1);
	b_len = ft_stklen(*b);
	while (b_len < mid && ft_is_sorted(a) != 1)
	{
		res = 0;
		res = ft_select_best(a, b, mid, batch);
		if (res == 0)
			ft_select_sec(a, b, mid, batch);
		if ((*b) != NULL && (*b)->n != NULL)
			ft_arrange_b(b);
		b_len++;
	}
}
