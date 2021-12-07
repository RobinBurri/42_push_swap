/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_bat_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 08:44:53 by rburri            #+#    #+#             */
/*   Updated: 2021/12/06 08:46:58 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_has_bat_left(t_node *stack, int batch)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->b == batch)
			return (1);
		tmp = tmp->n;
	}
	return (0);
}
