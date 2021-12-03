/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:28:08 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 17:28:09 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_stack(t_node *stack)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		ft_putchar('v');
		ft_putchar(':');
		ft_putnbr(tmp->v);
		ft_putchar('-');
		ft_putchar('i');
		ft_putchar(':');
		ft_putnbr(tmp->i);
		ft_putchar('-');
		ft_putchar('b');
		ft_putchar(':');
		ft_putnbr(tmp->b);
		ft_putchar('\n');
		tmp = tmp->n;
	}
}
