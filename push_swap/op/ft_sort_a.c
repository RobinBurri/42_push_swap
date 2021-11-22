
#include "../push_swap.h"

void ft_sort_a(t_stack *a, t_stack *b, int *batch)
{
    int mid;
    int len;
    int sorted;
    static int  i = 0;

    sorted = ft_len_minus_sorted(a);
    len = ft_stklen(a);
    len = len - sorted;
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
    ft_print_stack(a);
}