/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stklen_batch.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:52:19 by rburri            #+#    #+#             */
/*   Updated: 2021/11/20 14:54:22 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stklen_batch(t_stack *a, int batch)
{
		t_node	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (tmp != NULL)
	{
		if (tmp->b == batch)
			i++;
		tmp = tmp->n;
	}
	return (i);
}
