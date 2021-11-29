
#include "../push_swap.h"

void ft_sort_a(t_stack *a, t_stack *b)
{
    int mid;
    int b_len;
    int batch;
    
    batch = ft_min_bat(a);
    mid = (ft_max_ind_bat(a, batch) + 1);
    b_len = ft_stklen(b);
    ft_find_and_send_a(a, b, mid, batch, &b_len);
    // ft_print_stack(a);
    // ft_putchar('-');
    // ft_putchar('\n');
    // ft_print_stack(b);
    // ft_putchar('-');
    // ft_putchar('\n');
}
