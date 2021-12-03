/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:27:36 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 18:21:23 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_big(t_node **a, t_node **b)
{
	while (ft_is_sorted(a) != 1)
	{
		ft_find_and_send_a(a, b);
		if (ft_rev_sorted(b) != 1)
			ft_sort_b(a, b);
	}
	while ((*b) != NULL)
		push_a(a, b, 0);
}

// if (ft_sorted(a) != 1)
// ft_first_round(a, b);