#include "../push_swap.h"

int	ft_rev_sorted(t_stack *stack)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp->n != NULL)
	{
		if (tmp->v < tmp->n->v)
			return (0);
		tmp = tmp->n;
	}
	return (1);
}