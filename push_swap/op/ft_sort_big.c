/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:06:38 by rburri            #+#    #+#             */
/*   Updated: 2021/11/20 17:42:38 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_has_two_left(t_stack *a, t_stack *b, int *batch)
{
	int	len;

	len = ft_stklen_batch(b, *batch);
	if (len == 1)
	{
		push_a(a, b, 0);
		return (-1);
	}
	else if (len == 2)
	{
		if ((*b)->i < (*b)->n->i)
			swap_b(b);
		push_a(a, b, 0);	
		push_a(a, b, 0);	
		return (-1);
	} 
	return (len);
}

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
    int     cnt;
    int     r;
	int		len;

    cnt = 0;
    r = 0;
	len = ft_has_two_left(a, b, batch);
	if (len < 0)
		return ;
    while (cnt < len || r > 0)
	{
        tmp = *b;
		if (tmp->i > mid && tmp->b == *batch)
        {
            push_a(a, b, 0);
            cnt++;
        }
        else if (tmp->i <= mid && tmp->b == *batch)
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
void ft_find_and_send_b1(t_stack *a, t_stack *b, int mid, int *batch)
{ 
    t_node  *tmp;
    int     cnt;
	int		len;

    cnt = 0;
	len = 1;
    while (cnt < len)
	{	
		len = ft_has_two_left(a, b, batch);
		if (len < 0)	
			return ;
        tmp = *b;
		if (tmp->i > mid)
        {
            push_a(a, b, 0);
            cnt++;
        }
        else if (tmp->i <= mid)
            rotate_b(b);
	}
}

void	ft_sort_big(t_stack *a, t_stack *b, int len)
{
	int		mid;
    int     batch;

	batch = 0;
    while (ft_sorted(a) != 1)
    {
		batch++;
	    mid = (ft_min_index(a) + (len / 2));
        ft_find_and_send_a(a, b, mid, &batch);
        len = ft_stklen(a);
		if (len == 2)
		{
			if ((*a)->i > (*a)->n->i)
				swap_a(a);
		}
    }
    while (batch != 0)
    {
		if (batch >= 2)
		{
			mid = ft_find_mid(b, batch);
			ft_find_and_send_b(a, b, mid, &batch);
			batch--;
		}
		else
		{
			mid = ft_find_mid(b, batch);
			ft_find_and_send_b1(a, b, mid, &batch);
			batch--;
		}
    }
}
