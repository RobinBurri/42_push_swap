#include "../push_swap.h"

int ft_get_before_last_el_index(t_stack *a)
{
    t_node *tmp;

    tmp = *a;
    while (tmp->n->n != NULL)
        tmp = tmp->n;
    return (tmp->i);
}