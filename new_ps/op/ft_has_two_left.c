/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_two_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:46:26 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 18:50:09 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_has_two_left(t_node **a, t_node **b, int batch)
{
	int	len;

	len = ft_stklen_bat(b, batch);
	if (len == 1)
	{
		push_a(a, b, batch);
		return (-1);
	}
	else if (len == 2)
	{
		if ((*b)->i < (*b)->n->i)
			swap_b(b);
		push_a(a, b, batch);
		push_a(a, b, batch);
		return (-1);
	}
	return (len);
}
