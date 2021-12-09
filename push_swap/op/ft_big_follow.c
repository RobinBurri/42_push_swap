/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_follow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:06:40 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 16:21:16 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_select_best(t_node **a, t_node **b, int mid, int batch)
{
	if ((*a)->i < mid)
		push_b(a, b, batch);
}

static void	ft_arrange_b(t_node **a, t_node **b)
{
	if (((*b)->n->i > (*b)->i) && ((*a)->n->i < (*a)->i))
		ss(a, b);
	else if ((*b)->n->i > (*b)->i)
		swap_b(b);
	else if ((*a)->n->i < (*a)->i)
		swap_a(a);
}

void	ft_big_follow(t_node **a, t_node **b)
{
	int	mid;
	int	b_len;
	int	batch;

	batch = ft_min_bat(a);
	mid = (ft_find_mid(a, batch) + 1);
	b_len = ft_stklen(*b);
	while (b_len < mid && ft_is_sorted(a) != 1 && batch != 0)
	{
		if ((*b) != NULL && (*b)->n != NULL)
			ft_arrange_b(a, b);
		if (ft_is_sorted(a) == 1)
			break ;
		ft_select_best(a, b, mid, batch);
		b_len++;
	}
	while (ft_is_sorted(a) != 1 && batch == 0)
	{
		if ((*b) != NULL && (*b)->n != NULL)
			ft_arrange_b(a, b);
		if (ft_is_sorted(a) == 1)
			break ;
		push_b(a, b, batch);
	}
}
