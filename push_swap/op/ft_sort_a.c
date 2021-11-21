#include "../push_swap.h"

static void ft_find_and_send_a(t_stack *a, t_stack *b, int mid, int *batch)
{
    
    t_node      *tmp;
    static int  i = 0;

    while (i < mid)
	{
        tmp = *a;
		if (tmp->i < mid)
            push_b(a, b, *batch);
        else if (ft_get_last_el_index(a) < mid)
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
        i++;
	}
}

void ft_sort_a(t_stack *a, t_stack *b, int *batch)
{
    int mid;
    int len;

    len = ft_stklen(a);
    while (ft_sorted(a) != 1)
        {
            batch++;
            mid = (ft_min_index(a) + (len / 2));
            ft_find_and_send_a(a, b, mid, batch);
            len = ft_stklen(a);
            if (len == 2)
            {
                if ((*a)->i > (*a)->n->i)
                    swap_a(a);
            }
        }

}