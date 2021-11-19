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

void ft_find_and_send_a(t_stack *a, t_stack *b, int mid, int *batch)
{
    
    t_node      *tmp;
    static int  i = 0;

    while (i < mid)
	{
        tmp = *a;
		if (tmp->i < mid)
            push_b(a, b, *batch);
        else if (ft_get_last_el_index(a) < mid)
        {
            rev_rotate_a(a);
            push_b(a, b, *batch);
        }
        else if (ft_get_last_el_index(a) >= mid)
        {
            while ((*a)->i >= mid)
                rotate_a(a);
            push_b(a, b, *batch);    
        }
        i++;
	}
}

void ft_find_and_send_b(t_stack *a, t_stack *b, int mid, int *batch)
{ 
    t_node  *tmp;
    int     i;
    int     r;

    i = 0;
    r = 0;
    while (i < mid || r > 0)
	{
        tmp = *b;
		if (tmp->i < mid && tmp->b == *batch)
        {
            push_b(a, b, 0);
            i++;
        }
        else if (tmp->i > mid && tmp->b == *batch)
        {
            rotate_b(b);
            r++;

        }    
		else if (tmp->b != *batch && r > 0)
        {
            rev_rotate_b(b);
            r--;
        }
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
        ft_find_and_send_a(a, b, mid, &batch);
        len = ft_stklen(a);
		batch++;
    }
	if ((*a)->i > (*a)->n->i)
		swap_a(a);
    while (b != NULL)
    {
        mid = (ft_min_index(a) + (len / 2));
        ft_find_and_send_b(a, b, mid, &batch);
    }
    // if (b != NULL)
    //     push_a(a, b, 0); 
	
}
