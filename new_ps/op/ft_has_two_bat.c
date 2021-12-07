/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_two_bat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 08:49:13 by rburri            #+#    #+#             */
/*   Updated: 2021/12/06 08:53:12 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_has_two_bat(t_node *stack)
{
	t_node	*tmp;
	int		bat;

	tmp = stack;
	bat = tmp->b;
	while (tmp->n != NULL)
	{
		if (tmp->b != bat)
			return (1);
		tmp = tmp->n;
	}
	return (0);
}
