/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:06:18 by pdos-san          #+#    #+#             */
/*   Updated: 2025/11/17 19:11:50 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*string;

	string = s;
	while (n--)
		string[n] = c;
	return ((void *) string);
}
