
#include "../push_swap.h"

void ft_sort_a(t_stack *a, t_stack *b, int *batch)
{
    int mid;
    int len;
    int sorted;
    int b_len;

    mid = 0;
    while (ft_sorted(a) != 1)
    { 
        len = ft_stklen(a);
        b_len = ft_stklen(b);
        sorted = ft_len_minus_sorted(a, b_len);
        len = len - sorted;
        if (len == (2 + sorted))
        {
            if ((*a)->i > (*a)->n->i)
                swap_a(a);
        }
        *batch += 1;
        mid = ft_find_mid(a, 0);
        // mid += 10;
        ft_find_and_send_a(a, b, mid, batch, &b_len);
       
        // ft_print_stack(a);
        // ft_putchar('-');
        // ft_putchar('\n');
        // ft_print_stack(b);
        // ft_putchar('-');
        // ft_putchar('\n');
    }
}