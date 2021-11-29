#include "../push_swap.h"

int ft_max_bat(t_stack *a)
{
	t_node *tmp;
	int max;

	tmp = *a;
	max = 0;
	while (tmp != NULL)
	{
		if (tmp->b > max)
			max = tmp->b;
		tmp = tmp->n;
	}
	return (max);
}