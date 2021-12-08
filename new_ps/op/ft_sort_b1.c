#include "../push_swap.h"

static int	ft_select_bestb(t_node **a, t_node **b, int mid, int *r, int batch)
{
	if ((*b)->n->i > (*b)->i && (*b)->i > mid)
	{
		swap_b(b);
		push_a(a, b, batch);
		return (1);
	}
	else if (*r > 0 && ft_last_index(b) > (*b)->i && (*b)->i > mid)
	{
		rev_rotate_b(b);
		push_a(a, b, batch);
		*r = *r + 1;
		return (1);
	}
	else if ((*b)->i > mid)
	{
		push_a(a, b, batch);
		return (1);
	}
	return (0);
}

static void	ft_find_and_send_b(t_node **a, t_node **b, int batch)
{
	t_node	*tmp;
	int		r;
	int		len;
	int		mid;
	int		res;

	r = 0;
	while (1)
	{
		len = ft_b_has_two_left(a, b, batch);
		if (len < 0)
			return ;
		mid = ft_min_ind_bat(b, batch);
		while (1)
		{
			tmp = *b;
			res = ft_select_bestb(a, b, mid, &r, batch);
			if (res != 1 && tmp->i <= mid && tmp->b == batch)
			{
				rotate_b(b);
				r++;
			}
			else if (res != 1  && tmp->b != batch && r > 0)
			{
				while (r != 0)
				{
					rev_rotate_b(b);
					r--;
				}
				break ;
			}
			else if (r == 0)
			{
				len = ft_b_has_two_left(a, b, batch);
				if (len < 0)
					return ;
			}
		}
	}
}

static int	ft_select_bestb1(t_node **a, t_node **b, int mid, int batch)
{
	t_node	*tmp;

	tmp  = *b;
	if (tmp->n->i > tmp->i && tmp->i > mid)
	{
		swap_b(b);
		push_a(a, b, batch);
		return (1);
	}
	else if (ft_last_index(b) > tmp->i && tmp->i > mid)
	{
		rev_rotate_b(b);
		push_a(a, b, batch);
		return (1);
    }
	else if (tmp->i > mid)
	{
		push_a(a, b, batch);
		return (1);
    }
	return (0);
}

static void	ft_find_and_send_b1(t_node **a, t_node **b, int batch)
{ 
	int	len;
	int	mid;
	int	i;
	int	res;

    while (ft_rev_sorted(b) != 1)
    {
		i = 0;
		len = ft_b_has_two_left(a, b, batch);
		if (len < 0)
			return ;
		mid = ft_min_ind_bat(b, batch);
		while (i < (len / 2))
		{
			res = ft_select_bestb1(a, b, mid, batch);
			if (res != 1 && ft_last_index(b) > mid)
			{
				rev_rotate_b(b);
				push_a(a, b, batch);
			}
			else if (res != 1 && ft_last_index(b) <= mid)
			{
				while ((*b)->i < mid)
					rotate_b(b);
				push_a(a, b, batch);    
            }
        	i++;
        }
    }
}

void	ft_sort_b1(t_node **a, t_node **b)
{
    int bat;
    bat = ft_max_bat(b);
    while (ft_has_bat_left(*b, bat) != 0)
    {
        bat = ft_max_bat(b);
		if (bat > 0)
			ft_find_and_send_b(a, b, bat);
		else if (bat == 0)
			ft_find_and_send_b1(a, b, bat);
    }
}
