#include "../push_swap.h"

int ft_len_minus_sorted(t_stack *a, int i)
{
    int len;
    int j;
    t_node *tmp;
    int k;


    k = 0;
    j = i;
    tmp = *a;
    len = ft_stklen(&tmp);
    while ((k < len) && (!(ft_sorted(&tmp) == 1 && j == tmp->i)) )
    {
        j++;
        k++;
        tmp = tmp->n;
    }
    return (len - k);
}