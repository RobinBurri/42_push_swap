/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:18:31 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:11:44 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sorted(t_stack *stack)
{
	if ((*stack)->n == NULL)
		return (1);
	while ((*stack)->n != NULL)
	{
		if (((*stack)->i) > ((*stack)->n->i))
			return (0);
		(*stack) = (*stack)->n;
	}
	return (1);
}
