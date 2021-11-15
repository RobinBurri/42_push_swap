/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:56:57 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 14:16:43 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift down all el of stack b. the last el becomes the first one*/

#include "../push_swap.h"

void	rev_rotate_b(t_stack *b)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *b;
	tmp_end = *b;
	while (tmp_end->next->next != NULL)
		tmp_end = tmp_end->next;
	tmp_end->next->next = tmp_head;
	*b = tmp_end->next;
	tmp_end->next = NULL;
	ft_putstr("rrb\n");
}
