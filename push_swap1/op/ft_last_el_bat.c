#include "../push_swap.h"

int ft_last_el_bat(t_stack *a)
{
    t_node *tmp;

    tmp = *a;
    while (tmp->n != NULL)
        tmp = tmp->n;
    return (tmp->b);
}