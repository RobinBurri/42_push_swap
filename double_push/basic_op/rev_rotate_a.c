/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:56:43 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:25:38 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*shift down all el of stack a. the last el becomes the first one*/

#include "../push_swap.h"

void	rev_rotate_a(t_node *a)
{
	t_node	*tmp_head;
	t_node	*tmp_end;

	tmp_head = a;
	tmp_end = a;
	while (tmp_end->n->n != NULL)
		tmp_end = tmp_end->n;
	tmp_end->n->n = tmp_head;
	a = tmp_end->n;
	tmp_end->n = NULL;
	ft_putstr("rra\n");
}
