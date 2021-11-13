/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:26:23 by rburri            #+#    #+#             */
/*   Updated: 2021/11/13 20:10:12 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int ft_check_and_load(int argc, char **argv, t_stack *a)
{
	int	i;
	int j;
	if (argc < 2)
		return (1);
	int array[argc - 1];
	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		if (ft_is_int(argv[i]) == 1)
			return (1);
		array[i - 1] = ft_atoi(argv[i]);
		push(a, ft_atoi(argv[i]));
		i--;
	}
	i = 1;
	while (j < argc - 1)
	{
		while (i < argc -1)
		{
			if (array[j] == array[i++])
				return (1);
		}
		j++;
		i = j + 1;
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_stack a = NULL;
	// t_stack b = NULL;
	int ret;

	ret = ft_check_and_load(argc, argv, &a);
	if (ret != 0)
		{
			ft_putstr("Error\n");
			return (1);
		}

	int t;
	while (((t = pop(&a))!= STACK_EMPTY))
	{
		printf("t = %d\n", t);
	}
	return (0);
}

int push(t_stack *mystack, int value)
{
	t_node *newnode = malloc(sizeof(t_node));
	if (newnode == NULL)
		return (0);
	newnode->value = value;
	newnode->next = *mystack;
	*mystack = newnode;
	return (1);
}

int pop(t_stack *mystack)
{
	if (*mystack == NULL)
		return (STACK_EMPTY);
	int result = (*mystack)->value;
	t_node *tmp = *mystack;
	*mystack = (*mystack)->next;
	free(tmp);
	return (result);
}

