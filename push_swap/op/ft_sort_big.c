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

void	ft_sort_big(t_stack *a, t_stack *b)
{
    int     batch;

	batch = 0;
    while (ft_sorted(a) != 1)
    {
		ft_sort_a(a, b, &batch);
        ft_sort_b(a, b, &batch);
    } 
}
