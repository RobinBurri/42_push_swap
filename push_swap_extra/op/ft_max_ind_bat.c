#include "../push_swap.h"

int ft_max_ind_bat(t_stack *a, int batch)
{
	t_node *tmp;
	int max;

	tmp = *a;
	max = 0;
	while (tmp != NULL)
	{
		if (tmp->b == batch && (tmp->i) > max)
			max = tmp->i;
		tmp = tmp->n;
	}
	return (max);
}
