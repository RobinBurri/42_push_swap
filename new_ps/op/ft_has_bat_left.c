#include "../push_swap.h"

int ft_has_bat_left(t_node *stack, int batch)
{
    t_node *tmp;
    tmp = stack;
    while (tmp != NULL)
    {
        if (tmp->b == batch)
            return (1);
        tmp = tmp->n;
    }
    return (0);
}
