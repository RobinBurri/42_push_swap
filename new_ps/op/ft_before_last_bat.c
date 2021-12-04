/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_last_bat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:04:45 by rburri            #+#    #+#             */
/*   Updated: 2021/12/04 17:05:05 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_before_last_bat(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->n->n != NULL)
		tmp = tmp->n;
	return (tmp->b);
}
