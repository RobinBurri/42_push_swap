#include "../push_swap.h"

int	ft_a_has_two_left(t_node **a, t_node **b)
{
	int	len;

	len = ft_stklen(*a);
	if (len == 1)
	{
		push_b(a, b, (*a)->b);
		return (-1);
	}
	else if (len == 2)
	{
		if ((*a)->i < (*a)->n->i)
			swap_a(b);
		push_b(a, b, (*a)->b);
		push_b(a, b, (*a)->b);
		return (-1);
	}
	return (len);
}
