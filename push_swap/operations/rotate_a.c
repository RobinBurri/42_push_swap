/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:55:34 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 12:48:08 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift up all el of stack a by one. The first el becomes the last one*/

#include "../push_swap.h"

void	ft_rotate_a(t_stack *a)
{
	t_node *tmp_head = *a;
	t_node *tmp_end = *a;
	while (tmp_end->next != NULL)
		tmp_end = tmp_end->next;
	ft_swap(&tmp_end->value, &tmp_head->value);
	ft_putstr("ra\n");
}
