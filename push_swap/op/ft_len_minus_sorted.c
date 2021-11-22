#include "../push_swap.h"

int ft_len_minus_sorted(t_stack *a)
{
    int len;
    int i;
    t_node *tmp;

    i = 0;
    tmp = *a;
    len = ft_stklen(&tmp);
    while ((ft_sorted(&tmp) != 1 && i != tmp->i) && i < len)
    {
        i++;
        tmp = tmp->n;
    }
    return (len - i);
}