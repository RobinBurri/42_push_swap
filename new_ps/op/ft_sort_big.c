/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:27:36 by rburri            #+#    #+#             */
/*   Updated: 2021/12/04 16:52:40 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_big(t_node **a, t_node **b)
{
	int len;

	len = ft_stklen(*a);
	if (ft_is_sorted(a) != - 1)
	{
		ft_big_start(a, b);
		while (ft_stklen(*a) != len)
		{
			ft_sort_b(a, b);
			while (ft_is_sorted(a) != 1)
				ft_big_follow(a, b);
		}
		while ((*b) != NULL)
			push_a(a, b, 0);
	}
}
