/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:54:01 by rburri            #+#    #+#             */
/*   Updated: 2021/11/18 15:02:39 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*pop the first element of b and push it to a;
Nothing is done when there is only one or no element*/

#include "../push_swap.h"

void	push_a(t_stack *a, t_stack *b, int batch)
{
	t_node	*tmp;
	int		value;
	int		index;

	tmp = *b;
	if (*b != NULL)
	{
		value = tmp->v;
		index = tmp->i;
		ft_pop(b);
		ft_push(a, value, index, batch);
		ft_putstr("pa\n");
	}
}
