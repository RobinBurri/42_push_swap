/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:41:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 14:36:21 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a = NULL;
	t_node	*b = NULL;
	int		ret;
	int		len;

	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ret = ft_check_and_load(argv, &a);
	if (ret != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	len = ft_stklen(a);
	if (len < 6)
		ft_sort_small(&a, &b);
	else
		ft_sort_big(&a, &b);
	return (0);
}
