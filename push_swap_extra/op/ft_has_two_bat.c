#include "../push_swap.h"

int	ft_has_two_bat(t_node *stack)
{
	t_node	*tmp;
	int		bat;

	tmp = stack;
	bat = tmp->b;
	while (tmp->n != NULL)
	{
		if (tmp->b != bat)
			return (1);
		tmp = tmp->n;
	}
	return (0);
}
