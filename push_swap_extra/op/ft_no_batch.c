#include "../push_swap.h"

int ft_no_batch(t_stack *b, int batch)
{
    t_node *tmp;

    tmp = *b;
    while (tmp != NULL)
    {
        if (tmp->b == batch)
            return (0);
        tmp = tmp->n;
    }
    return (1);
}
