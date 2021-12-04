/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_last_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:57:59 by rburri            #+#    #+#             */
/*   Updated: 2021/12/04 15:58:47 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_before_last_index(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->n->n != NULL)
		tmp = tmp->n;
	return (tmp->i);
}
