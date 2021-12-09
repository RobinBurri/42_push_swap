/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_mid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:16:17 by rburri            #+#    #+#             */
/*   Updated: 2021/12/04 16:17:49 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_mid(t_node **a, int batch)
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
	if (index == 0 && cnt != 0)
		cnt = 0;
	return (index / cnt);
}
