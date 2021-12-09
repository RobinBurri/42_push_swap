/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_has_two_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:06:11 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 16:10:26 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_arrange_b(t_node **a, t_node **b)
{
	if (((*b)->n->i > (*b)->i) && ((*a)->n->i < (*a)->i))
		ss(a, b);
	else if ((*b)->n->i > (*b)->i)
		swap_b(b);
	else if ((*a)->n->i < (*a)->i)
		swap_a(a);
}

int	ft_a_has_two_left(t_node **a, t_node **b)
{
	int	len;

	len = ft_stklen(*a);
	if (len == 1)
	{
		push_b(a, b, (*a)->b);
		return (-1);
	}
	else if (len == 2)
	{
		if ((*a)->i < (*a)->n->i)
			swap_a(b);
		push_b(a, b, (*a)->b);
		ft_arrange_b(a, b);
		push_b(a, b, (*a)->b);
		return (-1);
	}
	return (len);
}
