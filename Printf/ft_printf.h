/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:42:06 by pdos-san          #+#    #+#             */
/*   Updated: 2025/12/16 20:10:53 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printf(const char *string, ...);
int	ft_puthex(unsigned long nb, char c, unsigned int dig);
int	ft_putstr(char *str);
int	ft_putnbr(int n);

#endif
