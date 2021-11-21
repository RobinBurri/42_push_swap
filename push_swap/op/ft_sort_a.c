#include "../push_swap.h"

static int ft_select_best(t_stack *a, t_stack *b, int mid, int *batch)
{
    t_node *tmp;

    tmp  = *a;
    if (tmp->n->i < tmp->i && tmp->i < mid)
    {
        swap_a(a);
        push_b(a, b, *batch);
        return (1);
    }
    else if (ft_get_last_el_index(a) < tmp->i && tmp->i < mid)
    {
        rev_rotate_a(a);
        push_b(a, b, *batch);
        return (1);
    }
    else if (tmp->i < mid)
    {
        push_b(a, b, *batch);
        return (1);
    }
    return (0);
}

static void ft_select_sec(t_stack *a, t_stack *b, int mid, int *batch)
{
    t_node *tmp;

    tmp  = *a;
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

static void ft_find_and_send_a(t_stack *a, t_stack *b, int mid, int *batch, int *i)
{
    t_node      *tmp;
    int         res;

    while (*i < mid)
	{
        res = ft_select_best(a, b, mid, batch);
        if (res == 0)
            ft_select_sec(a, b, mid, batch);
        ft_arrange_b(b);
        *i += 1;
	}
}

void ft_sort_a(t_stack *a, t_stack *b, int *batch)
{
    int mid;
    int len;
    static int  i = 0;

    len = ft_stklen(a);
    while (ft_sorted(a) != 1)
    {
        *batch += 1;
        mid = (ft_min_index(a) + (len / 2));
        ft_find_and_send_a(a, b, mid, batch, &i);
        len = ft_stklen(a);
        if (len == 2)
        {
            if ((*a)->i > (*a)->n->i)
                swap_a(a);
        }
    }
    i = 0;
}