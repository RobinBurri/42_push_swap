/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:26:23 by rburri            #+#    #+#             */
/*   Updated: 2021/11/13 21:16:55 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stack a = NULL;
	// t_stack b = NULL;
	int ret;

	ret = ft_check_and_load(argc, argv, &a);
	if (ret != 0)
			return (1);

	ft_print_stack(&a);
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


void	ft_print_stack(t_stack *mystack)
{
	t_node *tmp = *mystack;
	while (tmp != NULL)
	{
		ft_putnbr(tmp->value);
		ft_putchar('\n');
		tmp = tmp->next;		
	}
}