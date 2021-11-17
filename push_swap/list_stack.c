/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:26:23 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:13:54 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stack a = NULL;
	t_stack b = NULL;
	int ret;
	// int len;

	// len = ft_stklen(&a);
	ret = ft_check_and_load(argc, argv, &a);
	if (ret != 0)
			return (1);
	ft_print_stack(&a);
	putchar('-');
	putchar('\n');
	ft_sort(&a, &b);
	ft_print_stack(&a);
	putchar('-');
	putchar('\n');
	
	return (0);
}


void	ft_print_stack(t_stack *mystack)
{
	t_node *tmp = *mystack;
	while (tmp != NULL)
	{
		ft_putnbr(tmp->v);
		ft_putchar('\n');
		tmp = tmp->n;		
	}
}
