/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_batch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:38:50 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:40:02 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_no_batch(t_node *b, int batch)
{
	t_node	*tmp;

	tmp = b;
	while (tmp != NULL)
	{
		if (tmp->b == batch)
			return (0);
		tmp = tmp->n;
	}
	return (1);
}
