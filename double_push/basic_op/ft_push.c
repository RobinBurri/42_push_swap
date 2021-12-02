/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:59:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:22:05 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_node *stack, int value, int index, int batch)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (newnode == NULL)
		return (0);
	newnode->v = value;
	newnode->i = index;
	newnode->b = batch;
	newnode->n = stack;
	newnode->p = NULL;
	stack->p = newnode;
	stack = newnode;
	return (1);
}
