/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:59:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 14:16:49 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_node **stack, int value, int index, int batch)
{
	t_node	*nn;

	nn = malloc(sizeof(t_node));
	if (nn == NULL)
		return (0);

	nn->v = value;
	nn->i = index;
	nn->b = batch;
	nn->p = NULL;
	if (*stack != NULL){
		(*stack)->p = nn;
		nn->n = *stack;
	} else {
		nn->n = NULL; 
	}
	*stack = nn;
	return (1);
}
