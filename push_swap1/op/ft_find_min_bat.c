#include "../push_swap.h"

int ft_min_bat(t_stack *a)
{
	t_node *tmp;
	int min;

	tmp = *a;
	min = INT_MAX;
	while (tmp != NULL)
	{
		if (tmp->b < min)
			min = tmp->b;
		tmp = tmp->n;
	}
	return (min);
}