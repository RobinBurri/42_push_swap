#include "../push_swap.h"

int ft_no_batch(t_stack *b, int batch)
{
    t_node *tmp;

    tmp = *b;
    while (tmp != NULL)
    {
        if (tmp->b == batch)
            return (0);
        tmp = tmp->n;
    }
    return (1);
}

int	ft_find_mid(t_stack *a, int batch)
{
	t_node	*tmp;
	int		cnt;
	int		index;

	tmp = *a;
	cnt = 0;
	index = 0;
	while (tmp != NULL && tmp->b == batch)
	{
		index += tmp->i;
		cnt++;
		tmp = tmp->n;
	}
	return 	(index / cnt);
}

static int	ft_has_two_left(t_stack *a, t_stack *b, int *batch)
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



void ft_find_and_send_b(t_stack *a, t_stack *b, int *batch)
{ 
    t_node  *tmp;
    int     cnt;
    int     r;
	int		len;

    cnt = 0;
    r = 0;
	len = ft_has_two_left(a, b, batch);
	if (len < 0)
		return ;
    while (cnt < len || r > 0)
	{
        tmp = *b;
		if (tmp->i > mid && tmp->b == *batch)
        {
            push_a(a, b, 0);
            cnt++;
        }
        else if (tmp->i <= mid && tmp->b == *batch)
        {
            rotate_b(b);
            r++;
        }    
		else if (tmp->b != *batch && r > 0)
        {
            rev_rotate_b(b);
            r--;
        }
	}
}
void ft_find_and_send_b1(t_stack *a, t_stack *b, int *batch)
{ 
    t_node  *tmp;
	int		len;

	len = 1;
    while (len)
	{	
		len = ft_has_two_left(a, b, batch);
		if (len < 0)	
			return ;
        tmp = *b;
		if (tmp->i > mid)
            push_a(a, b, 0);
        else if (tmp->i <= mid)
            rotate_b(b);
	}
}
void ft_sort_b(t_stack *a, t_stack *b, int *batch)
{
    while (*batch != 0)
    {
		if (*batch >= 2)
		{
			ft_find_and_send_b(a, b,*batch);
            if (ft_no_batch(b, *batch) == 0)
			    *batch--;
		}
		else
		{
			ft_find_and_send_b1(a, b, *batch);
			*batch--;
		}
    }
}