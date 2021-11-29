#include "../push_swap.h"

static void ft_can_push(t_stack *a, t_stack *b, int low, int high)
{
    int b_len;
    if ((*a)->b == low)
            push_b(a, b, low);
        else if ((*a)->b == high)
            push_b(a, b, high);
    b_len = ft_stklen(b);
    if (b_len > 1)
    {
        if ((*b)->b > (*b)->n->b)
            rotate_b(b);
    }
}

static void ft_can_rot(t_stack *a, t_stack *b, int low, int high)
{
    int b_len;
 
    b_len = ft_stklen(b);
    if (b_len > 1)
    {
        if (((*b)->b > (*b)->n->b) && ((*a)->n->b == low))
        {
            rr(a, b);
            push_b(a, b, low);
        }
        else if (((*b)->b > (*b)->n->b) && ((*a)->n->b == high))
        {
            rr(a, b);
            push_b(a, b, high);
        }
    }
    if (((*a)->n->b == low))
    {
        rotate_a(a);
        push_b(a, b, low);
    }
    else if (((*a)->n->b == high))
    {
        rotate_a(a);
        push_b(a, b, high);
    }
}

static void ft_calc_hl(t_stack *a, int *high, int *low)
{
    int max;
    max = ft_max_bat(a);
    if ((max / 2) % 2 == 0)
    {
        *high = max / 2;
        *low = *high - 1;
    }
    else
    {
        *low = max / 2;
        *high = *low + 1;
    }
}

void    ft_first_round(t_stack *a, t_stack *b)
{
    int high;
    int low;
    int max;
    max = ft_max_bat(a);
    ft_calc_hl(a, &high, &low);

    while (low >= 0 || high <= max)
    {
        while (ft_last_el_bat(a) == high || ft_last_el_bat(a) == low)
            rev_rotate_a(a);
        ft_can_push(a, b, low, high);
        ft_can_rot(a, b, low, high);
    }
 


}