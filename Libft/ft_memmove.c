/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:01:23 by pdos-san          #+#    #+#             */
/*   Updated: 2025/11/17 19:51:26 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	if (dest > src)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *) dest);
}
