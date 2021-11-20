/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_mid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:39 by rburri            #+#    #+#             */
/*   Updated: 2021/11/20 15:43:59 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_mid(t_stack *a, int batch)
{
	t_node	*tmp;
	int		cnt;
	int		index;

	tmp = *a;
	cnt = 0;
	index = 0;
	while (tmp != NULL && tmp->b == batch)
	{
		index += tmp->i;
		cnt++;
		tmp = tmp->n;
	}
	return 	(index / cnt);
}
