/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:29:09 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 16:44:38 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_small(t_stack *a, t_stack *b)
{
	int	len;

	len = ft_stklen(a);
	if (ft_sorted(a) || len == 1)
		return ;
	if (len == 2)
	{
		swap_a(a);
		return ;
	}
	if (len == 3)
		ft_sort_three(a);
	if (len == 4)
		ft_sort_four(a, b, len);
}
