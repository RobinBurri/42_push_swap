/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_minus_sorted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:43:57 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:46:22 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_len_minus_sorted(t_node *a, int i)
{
	t_node	*tmp;
	int		len;
	int		j;
	int		k;

	k = 0;
	j = i;
	tmp = a;
	len = ft_stklen(tmp);
	while ((k < len) && (!(ft_sorted(tmp) == 1 && j == tmp->i)))
	{
		j++;
		k++;
		tmp = tmp->n;
	}
	return (len - k);
}
