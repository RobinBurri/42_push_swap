/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:41:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 18:42:02 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_solution(t_node **a, t_node **b)
{
	int	len;

	len = ft_stklen(*a);
	if (len < 6)
		ft_sort_small(a, b);
	else
		ft_sort_big(a, b);
}

static void	ft_free_stacks(t_node **a, t_node **b)
{
	while ((*b) != NULL)
		ft_pop(b);
	while ((*a) != NULL)
		ft_pop(a);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		ret;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	if (argc == 2)
		ret = ft_check_and_load(argv, &a);
	else
		ret = ft_check_and_load2(argc, argv, &a);
	if (ret != 0)
	{
		ft_putstr2("Error\n");
		return (1);
	}
	if (ft_is_sorted(&a) == 1)
		return (0);
	ft_solution(&a, &b);
	ft_free_stacks(&a, &b);
	return (0);
}
