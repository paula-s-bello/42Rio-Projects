/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:27:04 by pdos-san          #+#    #+#             */
/*   Updated: 2025/12/18 17:13:02 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	check_pointer(void *p)
{
	int	count;

	count = 0;
	if (!p)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_puthex((unsigned long)p, 'x', 16);
	return (count);
}

int	ft_putunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunsigned(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

static int	ft_printf_verify(const char *string, int i, va_list args)
{
	int	count;

	count = 0;
	if (string[i] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (string[i] == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (string[i] == 'd' || string [i] == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (string[i] == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (string[i] == 'x' || string[i] == 'X')
		count += ft_puthex(va_arg(args, unsigned int), string[i], 16);
	else if (string[i] == 'p')
		count += check_pointer(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *string, ...)
{
	int				i;
	int				count;
	va_list			list_args;

	if (!string)
		return (0);
	i = 0;
	count = 0;
	va_start(list_args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			if (string[i] == '%')
				count += ft_putchar('%');
			else
				count += ft_printf_verify(string, i, list_args);
		}
		else
			count += write(1, &string[i], 1);
		i++;
	}
	va_end(list_args);
	return (count);
}
/*
int	main(void)
{
	ft_printf("meu caractere:%c", 'p');
}*/
