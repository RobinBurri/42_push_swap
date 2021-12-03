/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_bat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:36:59 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 18:37:43 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_max_bat(t_node **a)
{
	t_node	*tmp;
	int		max;

	tmp = *a;
	max = 0;
	while (tmp != NULL)
	{
		if (tmp->b > max)
			max = tmp->b;
		tmp = tmp->n;
	}
	return (max);
}
