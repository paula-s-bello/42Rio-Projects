/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:27:04 by pdos-san          #+#    #+#             */
/*   Updated: 2025/12/04 15:30:33 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printf(const char *string);

static int	ft_printf_verific(const char *string, ...)
{ 
	int		i;
	int		count;
	va_list		list_args;

	i = 0;
	count = 0;
	va_start(list_args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			if (string[i] == '%')
				ft_putchar('%');
			if (string[i] == 'c')
				ft_putchar(va_arg(list_args, char));
			if (string[i] == 's')
				count += ft_putstr(list_args);
			if (string[i] == 'd' || string [i] 'i')
				count += ft_putnbr(va_arg(list_args, int));
		}
		}
		write(1, &string[i], 1);
		i++;
	}
	va_end(list_args);
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	printf("quantidade caracteres: %d" ,ft_printf("paula"));
}*/
