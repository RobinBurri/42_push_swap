/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:43:09 by rburri            #+#    #+#             */
/*   Updated: 2021/12/06 08:55:50 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_can_push(t_node **a, t_node **b, int low, int high)
{
    if ((*a)->b == low || (*a)->b == high)
        push_b(a, b, (*a)->b);
	else
    {
		rotate_a(a);
        if ((*a)->b == low || (*a)->b == high)
            push_b(a, b, (*a)->b);
    }
}

static void ft_can_rot(t_node **a, t_node **b, int low, int high)
{
    if ((*b)->b < (*b)->n->b)
    {
        if ((*a)->b != high || (*a)->b != low)
            rr(a, b);
        else
            rotate_b(b);
    }
}

static void ft_find_bigger_to_push(t_node **a, t_node **b)
{
    if ((*a)->i > (*a)->n->i && (*a)->i > ft_last_index(a))
        push_b(a, b, (*a)->b);
    if (ft_last_index(a) > (*a)->i && ft_last_index(a) > (*a)->n->i)
    {
        rev_rotate_a(a);
        push_b(a, b, (*a)->b);
    }
}

static void ft_swap_best(t_node **a, t_node **b)
{
    if ((*a)->i < (*a)->n->i && (*b)->i > (*b)->n->i)
        ss(a, b);
    else if ((*b)->i > (*b)->n->i)
        swap_b(b);
    else if ((*a)->i < (*a)->n->i)
        swap_a(a);
}


void    ft_big_start(t_node **a, t_node **b)
{
    int high;
    int low;
    int max;
    max = ft_max_bat(a);
    high = max / 2;
    low = high - 1;
    while (ft_is_sorted(a) != 1 && ft_stklen(*a) > 2)
    {
        while (ft_has_two_bat(*a) == 1
			&& (ft_has_bat_left(*a, high)|| ft_has_bat_left(*a, low)))
        {
        // while ((ft_last_el_bat(a) == high || ft_last_el_bat(a) == low)
		// 	|| (ft_before_last_bat(a) == high || ft_before_last_bat(a) == low))
		// {
        //     rev_rotate_a(a);		
		// }
        	// ft_print_stack(*b);
        	if (ft_stklen(*b) > 1)
            {
            	ft_can_rot(a, b, low, high);
                ft_swap_best(a, b);
            }
        	ft_can_push(a, b, low, high);
        }
        high++;
        low--;
        while (ft_has_two_bat(*a) == 0 && ft_is_sorted(a) != 1 && ft_stklen(*a) > 2)
        {
            // ft_print_stack(*b);
            ft_find_bigger_to_push(a, b);
            ft_swap_best(a, b);
        }
    }
}