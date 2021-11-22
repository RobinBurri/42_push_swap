#include "../push_swap.h"

void	ft_print_stack(t_stack *mystack)
{
	t_node	*tmp;

	tmp = *mystack;
	while (tmp != NULL)
	{
		ft_putchar('v');
		ft_putchar(':');
		ft_putnbr(tmp->v);
		ft_putchar('-');
		ft_putchar('i');
		ft_putchar(':');
		ft_putnbr(tmp->i);
		ft_putchar('-');
		ft_putchar('b');
		ft_putchar(':');
		ft_putnbr(tmp->b);
		ft_putchar('\n');
		tmp = tmp->n;
	}
}