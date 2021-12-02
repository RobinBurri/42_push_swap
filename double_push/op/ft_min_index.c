/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:27:47 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:40:47 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_min_index(t_node *a)
{
	t_node	*tmp;
	int		i;

	tmp = a;
	i = tmp->i;
	while (tmp != NULL)
	{
		if (tmp->i < i)
			i = tmp->i;
		tmp = tmp->n;
	}
	return (i);
}
