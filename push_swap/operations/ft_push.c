/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:59:01 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 14:23:32 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_stack *mystack, int value)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (newnode == NULL)
		return (0);
	newnode->value = value;
	newnode->next = *mystack;
	*mystack = newnode;
	return (1);
}
