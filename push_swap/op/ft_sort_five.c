/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:50:35 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 16:47:59 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_five(t_stack *a, t_stack *b, int len)
{
	t_node	*t;
	int		tmp_len;

	t = *a;
	tmp_len = len;
	while (tmp_len-- > 3)
	{
		if (t->v > t->n->v)
			swap_a(a);
		push_b(a, b, 0);
		t = *a;
	}
	ft_sort_three(a);
	while (tmp_len++ != len)
	{
		push_a(a, b, 0);
		ft_sort_push(a);
	}
}
