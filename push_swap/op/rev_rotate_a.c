/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:56:43 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 14:15:35 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift down all el of stack a. the last el becomes the first one*/

#include "../push_swap.h"

void	rev_rotate_a(t_stack *a)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *a;
	tmp_end = *a;
	while (tmp_end->next->next != NULL)
		tmp_end = tmp_end->next;
	tmp_end->next->next = tmp_head;
	*a = tmp_end->next;
	tmp_end->next = NULL;
	ft_putstr("rra\n");
}
