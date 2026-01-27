/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 20:04:36 by pdos-san          #+#    #+#             */
/*   Updated: 2025/11/18 19:18:02 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	max_len;
	size_t	i;
	char	*strcpy;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	max_len = s_len - start;
	if (len > max_len)
		len = max_len;
	strcpy = (char *)malloc(len + 1);
	if (!strcpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strcpy[i] = s[start + i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
