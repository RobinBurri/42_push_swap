/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:06:38 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 13:47:49 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_big(t_stack *a, t_stack *b)
{
    // if (ft_sorted(a) != 1)
    //     ft_first_round(a, b);
    while (ft_sorted(a) != 1)
    {
		ft_sort_a(a, b);
        if (ft_rev_sorted(b) != 1)
            ft_sort_b(a, b);
    } 
    while ((*b) != NULL)
        push_a(a, b, 0);
}
