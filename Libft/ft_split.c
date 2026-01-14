/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:42:43 by pdos-san          #+#    #+#             */
/*   Updated: 2025/11/18 18:56:21 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(char const *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static const char	*skip_char(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static char	**free_all(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	s = skip_char(s, c);
	while (i < words)
	{
		arr[i] = copy_word(s, c);
		if (!arr[i])
			return (free_all(arr, i - 1));
		s += ft_strlen(arr[i]);
		s = skip_char(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
