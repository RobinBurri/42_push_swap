/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:06:38 by rburri            #+#    #+#             */
/*   Updated: 2021/11/18 12:37:51 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_find_and_send(t_stack *a, t_stack *b, int mid, int *batch, int len)
{
    
    t_node  *tmp;
    int     i;

    i = 0;
    while (i < mid || len != 2)
	{
        tmp = *a;
		if (tmp->i < mid)
            push_b(a, b, *batch);
        else if (tmp->i > mid && ft_get_last_el_index(a) < mid)
        {
            rev_rotate_a(a);
            push_b(a, b, *batch);
        }
        else if (tmp->i > mid && ft_get_last_el_index(a) >= mid)
        {
            while ((*a)->i > mid)
                rotate_a(a);
            push_b(a, b, *batch);    
        }
        i++;
		len = ft_stklen(a);
	}
}

void	ft_sort_big(t_stack *a, t_stack *b, int len)
{
	
	int		mid;
    int     batch;


	batch = 1;
    while (ft_sorted(a) != 1 || len != 2)
    {
	    mid = (ft_min_index(a) + (len / 2));
        ft_find_and_send(a, b, mid, &batch, len);
        len = ft_stklen(a);
    }
	
}
