/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:00:44 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 11:01:01 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_pop(t_stack *mystack)
{
	if (*mystack == NULL)
		return (STACK_EMPTY);
	int result = (*mystack)->value;
	t_node *tmp = *mystack;
	*mystack = (*mystack)->next;
	free(tmp);
	return (result);
}
