/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:26:23 by rburri            #+#    #+#             */
/*   Updated: 2021/12/02 14:14:01 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		ret;
	int		len;

	a = NULL;
	b = NULL;
	ret = ft_check_and_load(argc, argv, &a);
	if (ret != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	len = ft_stklen(&a);
	// ft_print_stack(&a);
	
	if (len < 6)
		ft_sort_small(&a, &b);
	else
		ft_sort_big(&a, &b);
	// ft_print_stack(&a);
}

// void	ft_print_stack(t_stack *mystack)
// {
// 	t_node	*tmp;

// 	tmp = *mystack;
// 	while (tmp != NULL)
// 	{
// 		ft_putchar('v');
// 		ft_putchar(':');
// 		ft_putnbr(tmp->v);
// 		ft_putchar('-');
// 		ft_putchar('i');
// 		ft_putchar(':');
// 		ft_putnbr(tmp->i);
// 		ft_putchar('-');
// 		ft_putchar('b');
// 		ft_putchar(':');
// 		ft_putnbr(tmp->b);
// 		ft_putchar('\n');
// 		tmp = tmp->n;
// 	}
// }
