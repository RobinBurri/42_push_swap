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

void ft_find_and_send(t_stack *a, t_stack *b, t_node *tmp, int mid, int *batch)
{
    int i;

    i = 0;
    while (i < mid)
	{
        tmp = *a;
		if (tmp->i < mid)
            push_b(a, b, *batch);
        else if (tmp->i > mid && ft_get_last_el_index(a) < mid)
        {
            rev_rotate_a(a);
            push_b(a, b, *batch);
        }
        else if (tmp->i > mid && ft_get_last_el_index(a) > mid)
        {
            while (tmp->i > mid)
                rotate_a(a);
            push_b(a, b, *batch);    
        }
        i++;
	}
}

void	ft_sort_big(t_stack *a, t_stack *b, int len)
{
	t_node	*tmp;
	int		mid;
    int     i;
    int     batch;

    i = 0;
	batch = 1;
    while (ft_sorted(a) != 1 || len != 2)
    {
	    mid = len / 2;
        ft_find_and_send(a, b, tmp, mid, &batch);
        len = ft_stklen(a);
    }
	
}
