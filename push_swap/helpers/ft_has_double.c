/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:37:05 by rburri            #+#    #+#             */
/*   Updated: 2021/11/13 20:49:38 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_has_double(int array[], int len)
{
	int	j;
	int	i;

	j = 0;
	i = 1;
	while (j < len)
	{
		while (i < len)
		{
			if (array[j] == array[i++])
			{
				ft_putstr("Error\n");
				free(array);
				return (1);
			}
		}
		j++;
		i = j + 1;
	}
	free(array);
	return (0);
}
