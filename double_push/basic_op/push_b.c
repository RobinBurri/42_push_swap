/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:54:46 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 13:05:34 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*pop the first element of a and push it to b;
Nothing is done when there is only one or no element*/

#include "../push_swap.h"

void	push_b(t_node *a, t_node *b, int batch)
{
	t_node	*tmp;
	int		value;
	int		index;

	tmp = a;
	if (a != NULL)
	{
		value = tmp->v;
		index = tmp->i;
		ft_pop(a);
		ft_push(&b, value, index, batch);
		ft_putstr("pb\n");
	}
}
