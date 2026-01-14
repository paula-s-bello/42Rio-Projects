/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:13:09 by pdos-san          #+#    #+#             */
/*   Updated: 2025/12/18 17:05:08 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(unsigned long nb, char c, unsigned int dig)
{
	char			*hex;
	unsigned long	i;

	i = 0;
	if (c == 'x' || c == 'p')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	if (nb > dig -1)
		i += ft_puthex(nb / dig, c, dig);
	i += ft_putchar(hex[nb % dig]);
	return (i);
}
