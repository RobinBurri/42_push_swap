#include "../push_swap.h"

int	ft_min_index(t_stack *a)
{
	t_node	*tmp;
	int		i;

	tmp = *a;
	i = tmp->i;
	while (tmp->n != NULL)
	{
		if (tmp->i < i)
			i = tmp->i;
		tmp = tmp->n;
	}
	return 	(i);
}
