/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:55:53 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 14:13:03 by rburri           ###   ########.fr       */
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
	while (tmp_end->next != NULL)
		tmp_end = tmp_end->next;
	tmp_end->next = *b;
	*b = tmp_head->next;
	tmp_end->next->next = NULL;
	ft_putstr("rb\n");
}
