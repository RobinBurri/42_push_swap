/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_load.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:26:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 15:00:47 by rburri           ###   ########.fr       */
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

static int	ft_load_array(int *array, char **nbs, int len)
{
	while (len >= 0)
	{
		if (ft_is_int(nbs[len]) == 1)
			return (1);
		array[len] = ft_atoi(nbs[len]);
		len--;
	}
	return (0);
}

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

int	ft_check_and_load(char **argv, t_node **a)
{
	int	i;
	int	j;
	int	*array;
	int	index;
	char **nbs;

	nbs = ft_split(argv[1], ' ', &i);
	array = (int *)malloc(sizeof(int) * i);
	if (array == NULL)
		return (1);
	if (ft_load_array(array, nbs, i - 1) != 0)
		return (1);
	if (ft_has_double(array, i) != 0)
		return (1);
	j = i;
	while (i > 0)
	{
		index = ft_index(array, j, array[i - 1]);
		ft_push(a, array[i - 1], index, (index / 9));
		i--;
	}
	free(array);
	return (0);
}
