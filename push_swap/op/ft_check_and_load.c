/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_load.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:26:01 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 16:53:23 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_load_array(int *array, char **nbs, int len)
{
	while (len >= 0)
	{
		if (ft_is_int(nbs[len]) == 1)
		{
			free(array);
			return (1);
		}
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

static void	ft_load_a(t_node **a, int array[], int arr_len)
{
	int len;
	int index;

	len = arr_len;
	while (arr_len > 0)
	{
		index = ft_index(array, len, array[arr_len - 1]);
		ft_push(a, array[arr_len - 1], index, (index / 9));
		arr_len--;
	}
}

void	ft_free_nbs(char **nbs)
{
	int	i;
	
	i = 0;
	while (nbs[i] != NULL)
		free(nbs[i++]);
	free(nbs[i]);
	free(nbs);
}

int	ft_check_and_load(char **argv, t_node **a)
{
	char	**nbs;
	int		i;
	int		*array;

	nbs = ft_split(argv[1], ' ', &i);
	array = (int *)malloc(sizeof(int) * i);
	if (array == NULL)
		return (1);
	if ((ft_load_array(array, nbs, i - 1) != 0)
		|| (ft_has_double(array, i) != 0))
	{
		ft_free_nbs(nbs);
		return (1);
	}
	ft_load_a(a, array, i);
	ft_free_nbs(nbs);
	free(array);
	return (0);
}
