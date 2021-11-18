/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_load.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:41:02 by rburri            #+#    #+#             */
/*   Updated: 2021/11/18 15:15:52 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_has_double(int array[], int len)
{
	int	j;
	int	i;

	j = 0;
	i = 1;
	while (j < len)
	{
		while (i < len)
		{
			if (array[j] == array[i])
			{
				free(array);
				return (1);
			}
			i++;
		}
		j++;
		i = j + 1;
	}
	return (0);
}

static int	ft_index(int array[], int len, int value)
{
	int	j;
	int	count;

	count = 0;
	j = 0;
	while (j < len - 1)
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

int	ft_check_and_load(int argc, char **argv, t_stack *a)
{
	int	i;
	int	*array;
	int	d;

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
	while (i >= 1)
	{
		ft_push(a, array[i - 1], ft_index(array, argc - 1, array[i - 1]), 0);
		i--;
	}
	free(array);
	return (0);
}
