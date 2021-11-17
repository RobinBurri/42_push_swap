/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:50:35 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:10:48 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_five(t_stack *a, t_stack *b)
{
	t_node	*tmp;
	t_node	*tmp1;
	
	int		array[5];
	int		i;
	
	tmp = *a;
	tmp1 = *b;
	i = 0;
	while(tmp->n != NULL)
	{
		array[i++] = tmp->v;
		tmp = tmp->n;
	}
}