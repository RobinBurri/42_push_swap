/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:28:00 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 17:00:16 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#define MAX_INT 2147483647
#define MIN_INT -2147483648

int	ft_is_int(const char *str)
{
	long long	res;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 && (!(str[i] == '-' || str[i] == '+')))
			return (1);
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
		}
		i++;
	}
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	res = (res * sign);
	if (res >= MAX_INT || res <= MIN_INT)
		return (1);
	return (0);
}
