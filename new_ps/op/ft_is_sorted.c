/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:23:43 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 16:34:31 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	if ((tmp) == NULL)
		return (1);
	while ((tmp)->n != NULL)
	{
		if (((tmp)->i) > ((tmp)->n->i))
			return (0);
		(tmp) = (tmp)->n;
	}
	return (1);
}
