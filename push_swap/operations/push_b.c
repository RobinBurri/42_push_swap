/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:54:46 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 11:09:23 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*pop the first element of a and push it to b;
Nothing is done when there is only one or no element*/

#include "../push_swap.h"

void	ft_push_b(t_stack *a, t_stack *b)
{
	if (*a != NULL)
	{
		int tmp;
		tmp = ft_pop(a);
		ft_push(b, tmp);
		ft_putstr("pb\n");	
	}
}
