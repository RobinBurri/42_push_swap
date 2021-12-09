/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:33:28 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 16:33:58 by rburri           ###   ########.fr       */
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
