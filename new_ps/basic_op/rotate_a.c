/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:55:34 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 14:21:36 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift up all el of stack a by one. The first el becomes the last one*/

#include "../push_swap.h"

void	rotate_a(t_node **a)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *a;
	tmp_end = *a;
	while (tmp_end->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n = *a;
	*a = tmp_head->n;
	tmp_end->n->n = NULL;
	ft_putstr("ra\n");
}
