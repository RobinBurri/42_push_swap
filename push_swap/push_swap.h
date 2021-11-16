/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:28:01 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 15:55:57 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../helpers/helpers.h"
# include "../op/operations.h"

# define INT_MIN -2147483648
# define STACK_EMPTY INT_MIN

void	ft_print_stack(t_stack *mystack);
int		ft_stklen(t_stack *mystack);

#endif