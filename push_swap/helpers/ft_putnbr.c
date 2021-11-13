/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:07:34 by rburri            #+#    #+#             */
/*   Updated: 2021/11/13 21:08:08 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putnbr(int n)
{
	int		pow;
	char	digit;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n == 0)
		ft_putchar('0');
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		pow = 1;
		while (n / pow >= 10)
			pow *= 10;
		while (pow)
		{
			digit = n / pow + '0';
			ft_putchar(digit);
			n = n % pow;
			pow /= 10;
		}
	}
}
