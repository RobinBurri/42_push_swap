
#include "../push_swap.h"

static int	ft_select_best(t_node **a, t_node **b, int mid, int batch)
{
	if ((*a)->i < mid)
	{
		push_b(a, b, batch);
		return (1);
	}
	return (0);
}

static void	ft_arrange_b(t_node **a, t_node **b)
{
	if (((*b)->n->i > (*b)->i) && ((*a)->n->i < (*a)->i))
		ss(a, b);
	else if ((*b)->n->i > (*b)->i)
		swap_b(b);
	else if ((*a)->n->i < (*a)->i)
		swap_a(a);
}

void	ft_big_follow(t_node **a, t_node **b)
{
	int	mid;
	int	b_len;
	int	batch;

	batch = ft_min_bat(a);
	mid = (ft_find_mid(a, batch) + 1);
	b_len = ft_stklen(*b);
	if (batch != 0)
	{
		while (b_len < mid && ft_is_sorted(a) != 1)
		{
			if ((*b) != NULL && (*b)->n != NULL)
				ft_arrange_b(a, b);
			if (ft_is_sorted(a) == 1)
				break ;
			ft_select_best(a, b, mid, batch);
			b_len++;
		}
	}
	else
	{
		while (ft_is_sorted(a) != 1)
		{
			if ((*b) != NULL && (*b)->n != NULL)
				ft_arrange_b(a, b);
			if (ft_is_sorted(a) == 1)
				break ;
			push_b(a, b, batch);
		}
	}
	
}