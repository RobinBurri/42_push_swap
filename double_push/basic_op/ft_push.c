/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:59:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 13:04:44 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_node **stack, int value, int index, int batch)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (newnode == NULL)
		return (0);

	newnode->v = value;
	newnode->i = index;
	newnode->b = batch;
	newnode->p = NULL;
	if (*stack != NULL){
		(*stack)->p = newnode;
		newnode->n = *stack;
	} else {
		newnode->n = NULL; 
	}
	*stack = newnode;
	return (1);
}
