#include "../push_swap.h"

int ft_get_last_el_index(t_stack *a)
{
    t_node *tmp;

    tmp = *a;
    while (tmp->n != NULL)
        tmp = tmp->n;
    return (tmp->i);
}
