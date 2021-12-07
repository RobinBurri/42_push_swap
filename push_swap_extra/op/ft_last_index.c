#include "../push_swap.h"

int	ft_last_index(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->n != NULL)
		tmp = tmp->n;
	return (tmp->i);
}
