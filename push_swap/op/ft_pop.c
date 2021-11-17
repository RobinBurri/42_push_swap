/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:00:44 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:10:03 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_pop(t_stack *mystack)
{
	t_node	*tmp;
	int		result;

	tmp = *mystack;
	if (*mystack == NULL)
		return (STACK_EMPTY);
	result = (*mystack)->v;
	*mystack = (*mystack)->n;
	free(tmp);
	return (result);
}
