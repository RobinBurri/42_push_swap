/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_load.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:41:02 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 11:03:17 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_and_load(int argc, char **argv, t_stack *a)
{
	int	i;
	int	j;
	int	*array;

	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	array = (int *)malloc(sizeof(int) * (argc - 1));
	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		if (ft_is_int(argv[i]) == 1)
		{
			ft_putstr("Error\n");
			return (1);
		}
		array[i - 1] = ft_atoi(argv[i]);
		ft_push(a, ft_atoi(argv[i]));
		i--;
	}
	return (ft_has_double(array, argc - 1));
}
