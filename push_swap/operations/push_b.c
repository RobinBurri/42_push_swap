/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:54:46 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 14:18:15 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*pop the first element of a and push it to b;
Nothing is done when there is only one or no element*/

#include "../push_swap.h"

void	push_b(t_stack *a, t_stack *b)
{
	int	tmp;

	if (*a != NULL)
	{
		tmp = ft_pop(a);
		ft_push(b, tmp);
		ft_putstr("pb\n");
	}
}
