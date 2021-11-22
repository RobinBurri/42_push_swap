#include "../push_swap.h"

static int ft_select_best(t_stack *a, t_stack *b, int mid, int *batch)
{
    if ((*a)->n->i < (*a)->i && (*a)->i < mid)
    {
        swap_a(a);
        push_b(a, b, *batch);
        return (1);
    }
    else if (ft_get_last_el_index(a) < (*a)->i && (*a)->i < mid)
    {
        rev_rotate_a(a);
        push_b(a, b, *batch);
        return (1);
    }
    else if ((*a)->i < mid)
    {
        push_b(a, b, *batch);
        return (1);
    }
    return (0);
}

static void ft_select_sec(t_stack *a, t_stack *b, int mid, int *batch)
{
    if (ft_get_last_el_index(a) < mid)
    {
        rev_rotate_a(a);
        push_b(a, b, *batch);
    }
    else if (ft_get_last_el_index(a) >= mid)
    {
        while ((*a)->i >= mid)
            rotate_a(a);
        push_b(a, b, *batch);    
    }
}

static void ft_arrange_b(t_stack *b)
{
    if ((*b)->n != NULL && (*b)->n->i > (*b)->i)
        swap_b(b);
}

void ft_find_and_send_a(t_stack *a, t_stack *b, int mid, int *batch, int *i)
{
    int         res;

    while (*i < mid)
	{
        res = 0;
        res = ft_select_best(a, b, mid, batch);
        if (res == 0)
            ft_select_sec(a, b, mid, batch);
        ft_arrange_b(b);
        *i += 1;
	}
}

