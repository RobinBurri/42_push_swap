/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:43:09 by rburri            #+#    #+#             */
/*   Updated: 2021/12/04 17:35:33 by rburri           ###   ########.fr       */
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

// static void ft_calc_hl(t_node **a, int *high, int *low)
// {
//     int max;
//     max = ft_max_bat(a);
//     if ((max / 2) % 2 == 0)
//     {
//         *high = max / 2;
//         *low = *high - 1;
//     }
//     else
//     {
//         *low = max / 2;
//         *high = *low + 1;
//     }
// }

void    ft_big_start(t_node **a, t_node **b)
{
    int high;
    int low;
    int max;
    max = ft_max_bat(a);
    high = max / 2;
    low = high - 1;
    // ft_calc_hl(a, &high, &low);

	while (ft_has_bat_left(*a, high)|| ft_has_bat_left(*a, low))
    {
        // while ((ft_last_el_bat(a) == high || ft_last_el_bat(a) == low)
		// 	|| (ft_before_last_bat(a) == high || ft_before_last_bat(a) == low))
		// {
        //     rev_rotate_a(a);		
		// }
        ft_print_stack(*b);
        if (ft_stklen(*b) > 1)
            ft_can_rot(a, b, low, high);
        ft_can_push(a, b, low, high);
    }
}