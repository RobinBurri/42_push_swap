/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_ff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:10:29 by rburri            #+#    #+#             */
/*   Updated: 2021/12/04 17:10:20 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_chose_small(t_node **a, t_node **b, t_node *t)
{
	if (t->i < 2)
		push_b(a, b, 0);
	else if (t->n->i < 2)
	{
		swap_a(a);
		push_b(a, b, 0);
	}
	else if (ft_last_index(a) < 2 || ft_before_last_index(a) < 2)
	{
		if (ft_before_last_index(a) < 2 && ft_last_index(a) >= 2)
			rev_rotate_a(a);
		rev_rotate_a(a);
		push_b(a, b, 0);
	}
	else
	{
		while (t->i < 2)
			rotate_a(a);
		push_b(a, b, 0);
	}	
}

void	ft_sort_ff(t_node **a, t_node **b, int len)
{
	t_node	*t;
	int		tmp_len;

	t = *a;
	tmp_len = len;
	while (tmp_len-- > 3)
	{
		ft_chose_small(a, b, t);
		t = *a;
	}
	ft_sort_three(a);
	while (tmp_len++ != len)
	{
		push_a(a, b, 0);
		ft_sort_push(a);
	}
}
