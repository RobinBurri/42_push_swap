/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_ind_bat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:43:02 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:43:21 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_max_ind_bat(t_node *a, int batch)
{
	t_node	*tmp;
	int		max;

	tmp = a;
	max = 0;
	while (tmp != NULL)
	{
		if (tmp->b == batch && (tmp->i) > max)
			max = tmp->i;
		tmp = tmp->n;
	}
	return (max);
}
