/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stklen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:31:58 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:11:53 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stklen(t_stack *mystack)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *mystack;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->n;
	}
	return (i);
}
