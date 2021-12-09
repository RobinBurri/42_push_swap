/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:43:09 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 16:14:18 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_can_push(t_node **a, t_node **b, int low, int high)
{
	if ((*a)->b == low || (*a)->b == high)
		push_b(a, b, (*a)->b);
	else if (!((*a)->b == low || (*a)->b == high))
		rotate_a(a);
}

static void	ft_can_rot(t_node **a, t_node **b, int low, int high)
{
	if ((*b)->b < (*b)->n->b)
	{
		if ((*a)->b == high || (*a)->b == low)
			rotate_b(b);
		else
			rr(a, b);
	}
}

static void	ft_swap_best(t_node **a, t_node **b)
{
	if (((*a) != NULL && (*a)->n != NULL)
		&& ((*a)->i > (*a)->n->i && (*b)->i < (*b)->n->i))
		ss(a, b);
	else if ((*b)->i < (*b)->n->i)
		swap_b(b);
}

void	ft_big_start(t_node **a, t_node **b)
{
	int	high;
	int	low;
	int	max;

	max = ft_max_bat(a);
	high = (max + 1) / 2;
	low = high - 1;
	while ((*a) != NULL)
	{
		while (ft_has_bat_left(*a, high) || ft_has_bat_left(*a, low))
		{
			if (ft_stklen(*b) > 1)
			{
				ft_can_rot(a, b, low, high);
				ft_swap_best(a, b);
			}
			ft_can_push(a, b, low, high);
		}
		if ((*b)->b < (*b)->n->b)
			rotate_b(b);
		high++;
		low--;
	}
}
