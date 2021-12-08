/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:27:15 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 19:12:02 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_select_bestb(t_node **a, t_node **b, int mid, int *b_len)
{
	if ((*b)->i > mid)
	{
		push_a(a, b, (*b)->b);
		*b_len = *b_len - 1;
		return (1);
	}
	return (0);
}

static int	ft_arrange_a(t_node **a, t_node **b)
{
	if (((*b)->n->i > (*b)->i) && ((*a)->n->i < (*a)->i))
	{
		ss(a, b);
		return (1);
	}
	else if ((*a)->n->i < (*a)->i)
	{
		swap_a(a);
		return (1);
	}
	else if ((*b)->n->i > (*b)->i)
	{
		swap_b(b);
		return (1);
	}
	return (0);
}

void	ft_find_and_send_b(t_node **a, t_node **b, int batch, int mid)
{
	int	r;
	int		res;
	int b_len;

	r = 0;
	b_len = ft_stklen(*b);
	while (b_len > (mid + 1) && ft_is_sorted(b) != 1)
	{
		res = 0;
		if ((*a) != NULL && (*a)->n != NULL
			&& (*b) != NULL && (*b)->n != NULL)
			res += ft_arrange_a(a, b);
		res += ft_select_bestb(a, b, mid, &b_len);
		
		if ((*a) != NULL && (*a)->n != NULL
			&& (*b) != NULL && (*b)->n != NULL)
			res += ft_arrange_a(a, b);
		if (res == 0 && (*b)->i <= mid)
		{
			while ((*b)->i <= mid)
			{
				rotate_b(b);
				r++;
			}
		}
	}
	while (ft_last_el_bat(b) == batch && batch != 0)
		rev_rotate_b(b);
}

void	ft_sort_b(t_node **a, t_node **b)
{
    int bat;
	int mid;
	int len;
	bat = ft_max_bat(b);
	while (ft_has_bat_left(*b, bat) == 1)
	{
    	bat = ft_max_bat(b);
		len = ft_b_has_two_left(a, b, bat);
		if (len < 0)
			return ;
		if (len > 5)
			mid = ft_find_mid(b, bat);
		else
			mid = ft_min_ind_bat(b, bat);

		ft_find_and_send_b(a, b, bat, mid);

		if (ft_is_sorted(a) != 1)
			break ;
    }
}
