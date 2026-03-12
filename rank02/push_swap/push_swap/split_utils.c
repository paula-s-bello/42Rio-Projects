/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:45:56 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 18:46:02 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static char	*dup_word(char *start, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**fill_split(char **split, char *s)
{
	int		i;
	int		len;

	i = 0;
	while (*s)
	{
		while (*s && is_space(*s))
			s++;
		len = 0;
		while (s[len] && !is_space(s[len]))
			len++;
		if (len > 0)
		{
			split[i] = dup_word(s, len);
			if (!split[i])
				return (free_split(split), NULL);
			i++;
			s += len;
		}
	}
	split[i] = NULL;
	return (split);
}
