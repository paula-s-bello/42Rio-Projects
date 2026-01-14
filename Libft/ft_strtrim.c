/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:24:46 by pdos-san          #+#    #+#             */
/*   Updated: 2025/11/17 21:28:25 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	len = end - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}
