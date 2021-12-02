/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:50:35 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 14:10:20 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_chose_small(t_stack *a, t_stack *b, t_node *t)
{
	if (t->i < 3)
		push_b(a, b, 0);
	else if (t->n->i < 3)
	{
		swap_a(a);
		push_b(a, b, 0);
	}
	else if (ft_get_last_el_index(a) < 3)
	{
		rev_rotate_a(a);
		push_b(a, b, 0);
	}
	else
	{
		while (t->i < 3)
			rotate_a(a);
		push_b(a, b, 0);
	}	
}

void	ft_sort_four(t_stack *a, t_stack *b, int len)
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
