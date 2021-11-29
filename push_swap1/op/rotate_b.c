/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:55:53 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:13:04 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift up all el of stack b by one. The first el becomes the last one*/

#include "../push_swap.h"

void	rotate_b(t_stack *b)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *b;
	tmp_end = *b;
	while (tmp_end->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n = *b;
	*b = tmp_head->n;
	tmp_end->n->n = NULL;
	ft_putstr("rb\n");
}
