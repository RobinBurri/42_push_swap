/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_ind_bat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:42:09 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:42:13 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_min_ind_bat(t_node *a, int batch)
{
	t_node	*tmp;
	int		min;

	tmp = a;
	min = INT_MAX;
	while (tmp != NULL)
	{
		if (tmp->b == batch && (tmp->i) < min)
			min = tmp->i;
		tmp = tmp->n;
	}
	return (min);
}
