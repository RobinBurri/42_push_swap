/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:56:57 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 14:20:51 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift down all el of stack b. the last el becomes the first one*/

#include "../push_swap.h"

void	rev_rotate_b(t_node **b)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = *b;
	tmp_end = *b;
	while (tmp_end->n->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n->n = tmp_head;
	(*b) = tmp_end->n;
	tmp_end->n = NULL;
	ft_putstr("rrb\n");
}
