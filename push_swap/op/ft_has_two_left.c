#include "../push_swap.h"


int	ft_has_two_left(t_stack *a, t_stack *b, int *batch)
{
	int	len;

	len = ft_stklen_batch(b, *batch);
	if (len == 1)
	{
		push_a(a, b, 0);
		return (-1);
	}
	else if (len == 2)
	{
		if ((*b)->i < (*b)->n->i)
			swap_b(b);
		push_a(a, b, 0);	
		push_a(a, b, 0);	
		return (-1);
	} 
	return (len);
}