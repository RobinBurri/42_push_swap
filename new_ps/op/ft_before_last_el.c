/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_last_el.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:23:38 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 18:52:16 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_before_last_el(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->n->n != NULL)
		tmp = tmp->n;
	return (tmp->i);
}
