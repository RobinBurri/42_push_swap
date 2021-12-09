/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stklen_bat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:49:00 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 18:49:33 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stklen_bat(t_node **a, int batch)
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
