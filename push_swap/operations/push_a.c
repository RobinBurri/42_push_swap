/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:54:01 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 14:18:13 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*pop the first element of b and push it to a;
Nothing is done when there is only one or no element*/

#include "../push_swap.h"

void	push_a(t_stack *a, t_stack *b)
{
	int	tmp;

	if (*b != NULL)
	{
		tmp = ft_pop(b);
		ft_push(a, tmp);
		ft_putstr("pa\n");
	}
}
