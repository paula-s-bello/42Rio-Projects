/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:30:13 by pdos-san          #+#    #+#             */
/*   Updated: 2025/11/18 19:36:54 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pont;
	size_t	total;

	if (nmemb != 0 && size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	pont = malloc(total);
	if (!pont)
		return (NULL);
	ft_bzero(pont, total);
	return (pont);
}
