/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:10:45 by rburri            #+#    #+#             */
/*   Updated: 2021/12/09 14:20:30 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_count_words(const char *str, char c)
{
	int	trigger;
	int	words;

	words = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			words++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (words);
}

static char	*ft_write_string(char *dest, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != c && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_create_string(char **split, const char *str, char c)
{
	int	strnum;
	int	i;
	int	j;

	strnum = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c && str[i + j] != '\0')
				j++;
			split[strnum] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[strnum] == NULL)
				return ;
			ft_write_string(split[strnum], str + i, c);
			i += j;
			strnum++;
		}
	}
}

char	**ft_split(char const *s, char c, int *i)
{
	char	**split;
	int		string_count;

	if (!s)
		return (NULL);
	string_count = ft_count_words(s, c);
	*i = string_count;
	split = (char **)malloc((string_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[string_count] = 0;
	ft_create_string(split, s, c);
	return (split);
}
