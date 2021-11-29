#include "../push_swap.h"

int ft_min_ind_bat(t_stack *a, int batch)
{
	t_node *tmp;
	int min;

	tmp = *a;
	min = INT_MAX;
	while (tmp != NULL)
	{
		if (tmp->b == batch && (tmp->i) < min)
			min = tmp->i;
		tmp = tmp->n;
	}
	return (min);
}