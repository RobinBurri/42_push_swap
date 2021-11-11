/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:03:23 by rburri            #+#    #+#             */
/*   Updated: 2021/11/11 14:32:56 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static void ft_array_loader(int a[], int b[], int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return ;
	}
	while (i < argc - 1)
	{
		a[i] = atoi(argv[i + 1]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int a[argc - 1];
	int *b;
	int i;
	
	i = 0;
	ft_array_loader(a, b, argc, argv);
	while (i < argc - 1)
	{
		printf("a: %d\n", a[i]);
		i++;
	}
}