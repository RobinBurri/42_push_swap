/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_load2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:36:49 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 17:37:45 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_index(int array[], int len, int value)
{
	int	j;
	int	count;

	count = 0;
	j = 0;
	while (j < len)
	{
		if (value > array[j])
			count++;
		j++;
	}
	return (count);
}

static int	ft_load_array(int *array, char **argv, int len)
{
	while (len >= 1)
	{
		if (ft_is_int(argv[len]) == 1)
			return (1);
		array[len - 1] = ft_atoi(argv[len]);
		len--;
	}
	return (0);
}

int	ft_check_and_load2(int argc, char **argv, t_node **a)
{
	int	i;
	int	*array;
	int	index;

	if (argc < 2)
		return (1);
	array = (int *)malloc(sizeof(int) * (argc - 1));
	if (array == NULL)
		return (1);
	i = argc - 1;
	if (ft_load_array(array, argv, i) != 0)
		return (1);
	if (ft_has_double(array, argc - 1) != 0)
		return (1);
	while (i > 0)
	{
		index = ft_index(array, argc - 1, array[i - 1]);
		ft_push(a, array[i - 1], index, (index / 9));
		i--;
	}
	free(array);
	return (0);
}
