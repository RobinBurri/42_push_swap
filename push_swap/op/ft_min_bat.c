/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_bat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:38:07 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 17:39:26 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_min_bat(t_node **a)
{
	t_node	*tmp;
	int		min;

	tmp = *a;
	min = 1000;
	while (tmp != NULL)
	{
		if (tmp->b < min)
			min = tmp->b;
		tmp = tmp->n;
	}
	return (min);
}
