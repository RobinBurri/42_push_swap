/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:22:05 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:38:41 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rev_sorted(t_node *stack)
{
	t_node	*tmp;

	tmp = stack;
	if ((tmp) == NULL)
		return (1);
	while (tmp->n != NULL)
	{
		if (tmp->i < tmp->n->i)
			return (0);
		tmp = tmp->n;
	}
	return (1);
}
