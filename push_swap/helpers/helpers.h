/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:58:07 by rburri            #+#    #+#             */
/*   Updated: 2021/11/15 10:38:18 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
int		ft_is_int(const char *str);
int		ft_isdigit(int c);
int		ft_has_double(int array[], int len);
void	ft_swap(int *ptr1, int *ptr2);

#endif