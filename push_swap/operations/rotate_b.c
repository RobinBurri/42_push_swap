/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:55:53 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 12:48:16 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift up all el of stack b by one. The first el becomes the last one*/

#include "../push_swap.h"

void	ft_rotate_b(t_stack *b)
{
	t_node *tmp_head = *b;
	t_node *tmp_end = *b;
	while (tmp_end->next != NULL)
		tmp_end = tmp_end->next;
	ft_swap(&tmp_end->value, &tmp_head->value);
	ft_putstr("rb\n");
}
