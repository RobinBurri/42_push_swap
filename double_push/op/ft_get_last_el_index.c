/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_last_el_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:51:12 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:53:47 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_last_el_index(t_node *a)
{
	t_node	*tmp;

	tmp = a;
	while (tmp->n != NULL)
		tmp = tmp->n;
	return (tmp->i);
}
