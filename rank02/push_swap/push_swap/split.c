/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:40:34 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 18:40:47 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static int	count_words(char *s)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (!is_space(*s) && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (is_space(*s))
			in_word = 0;
		s++;
	}
	return (count);
}

void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split_spaces(char *s)
{
	char	**split;
	int		words;

	words = count_words(s);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (fill_split(split, s));
}
