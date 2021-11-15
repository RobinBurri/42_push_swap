/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:26:23 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 12:51:51 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>




int main(int argc, char **argv)
{
	t_stack a = NULL;
	// t_stack b = NULL;
	int ret;
	int len;

	ret = ft_check_and_load(argc, argv, &a);
	if (ret != 0)
			return (1);

	len = ft_stklen(&a);
	// printf("stacklen: %d", len);
	ft_print_stack(&a);
	putchar('\n');
	putchar('\n');
	putchar('\n');

	putchar('\n');
	ft_print_stack(&a);
	return (0);
}


void	ft_print_stack(t_stack *mystack)
{
	t_node *tmp = *mystack;
	while (tmp != NULL)
	{
		ft_putnbr(tmp->value);
		ft_putchar('\n');
		tmp = tmp->next;		
	}
	ft_putstr("$$$$\n");
}

int ft_stklen(t_stack *mystack)
{
	int	i;

	i = 0;
	t_node *tmp = *mystack;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

