#include "../push_swap.h"

static int ft_select_bestb(t_stack *a, t_stack *b, int mid, int *batch, int *r)
{
    t_node *tmp;

    tmp  = *b;
    if (tmp->n->i > tmp->i && tmp->i > mid)
    {
        swap_b(b);
        push_a(a, b, *batch);
        return (1);
    }
    else if (r > 0 && ft_get_last_el_index(b) > tmp->i && tmp->i > mid)
    {
        rev_rotate_b(b);
        push_a(a, b, *batch);
        *r = *r + 1;
        return (1);
    }    
    else if (tmp->i > mid)
    {
        push_a(a, b, 0);
        return (1);
    }
    return (0);
}
void ft_find_and_send_b(t_stack *a, t_stack *b, int *batch)
{ 
    t_node  *tmp;
    int     r;
	int		len;
    int     mid;
    int     res;

    r = 0;
    while (1)
    {
        len = ft_has_two_left(a, b, batch);
            if (len < 0)
                return ;
        mid = ft_find_mid(b, *batch);
        while (1)
        {
            tmp = *b;
            res = ft_select_bestb(a, b, mid, batch, &r);
            if (res != 1 && tmp->i <= mid && tmp->b == *batch)
            {
                rotate_b(b);
                r++;
            }    
            else if (res != 1  && tmp->b != *batch && r > 0)
            {
                while (r != 0)
                {
                    rev_rotate_b(b);
                    r--;
                }
                break ;
            }
            else if (r == 0)
            {
                len = ft_has_two_left(a, b, batch);
                if (len < 0)
                    return ;
            }
        }
    }
}
static int ft_select_bestb1(t_stack *a, t_stack *b, int mid, int *batch)
{
    t_node *tmp;

    tmp  = *b;
    if (tmp->n->i > tmp->i && tmp->i > mid)
    {
        swap_b(b);
        push_a(a, b, *batch);
        return (1);
    }
    else if (ft_get_last_el_index(b) > tmp->i && tmp->i > mid)
    {
        rev_rotate_b(b);
        push_a(a, b, *batch);
        return (1);
    }    
    else if (tmp->i > mid)
    {
        push_a(a, b, 0);
        return (1);
    }
    return (0);
}

void ft_find_and_send_b1(t_stack *a, t_stack *b, int *batch)
{ 
     t_node  *tmp;
	int		len;
    int     mid;
    int     i;
    int     res;
    
    while (1)
    {
        i = 0;
        len = ft_has_two_left(a, b, batch);
            if (len < 0)
                return ;
        mid = ft_find_mid(b, *batch);
        while (i < (len / 2))
        {
            tmp = *b;
            res = ft_select_bestb1(a, b, mid, batch);
            if (res != 1 && ft_get_last_el_index(b) > mid)
            {
                rev_rotate_b(b);
                push_a(a, b, 0);
            }
            else if (res != 1 && ft_get_last_el_index(b) <= mid)
            {
                while ((*b)->i < mid)
                    rotate_b(b);
                push_a(a, b, 0);    
            }
            i++;
        }
    }
}
void ft_sort_b(t_stack *a, t_stack *b, int *batch)
{
    while (*batch != 0)
    {
		if (*batch >= 2)
		{
			ft_find_and_send_b(a, b, batch);
            if (ft_no_batch(b, *batch) == 1)
			    *batch = (*batch - 1);
		}
		else if (*batch == 1)
		{
			ft_find_and_send_b1(a, b, batch);
			*batch = (*batch - 1);

        }
    }
}

// else if (ft_get_last_el_index(b) > tmp->i && tmp->i < mid)
//     {
//         rev_rotate_b(b);
//         push_a(a, b, *batch);
//         return (1);
//     }
//     else if (tmp->i < mid)
//     {
//         push_a(a, b, *batch);
//         return (1);
//     }