/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:22:36 by pdos-san          #+#    #+#             */
/*   Updated: 2025/10/15 17:11:16 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha >= 'a' && alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}
