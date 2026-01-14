/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:52:35 by pdos-san          #+#    #+#             */
/*   Updated: 2025/11/17 19:20:59 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	one;
	size_t	two;
	size_t	i;

	one = 0;
	while (one < size && dst[one] != '\0')
		one++;
	two = 0;
	while (src[two] != '\0')
		two++;
	if (one == size)
		return (size + two);
	i = 0;
	while (src[i] != '\0' && one + i + 1 < size)
	{
		dst[one + i] = src[i];
		i++;
	}
	dst[one + i] = '\0';
	return (one + two);
}
