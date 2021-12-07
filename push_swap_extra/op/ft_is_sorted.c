#include "../push_swap.h"

int	ft_is_sorted(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	if ((tmp) == NULL)
		return (1);
	while ((tmp)->n != NULL)
	{
		if (((tmp)->i) > ((tmp)->n->i))
			return (0);
		(tmp) = (tmp)->n;
	}
	return (1);
}