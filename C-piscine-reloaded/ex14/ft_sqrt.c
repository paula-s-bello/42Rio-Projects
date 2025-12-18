/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:01:40 by pdos-san          #+#    #+#             */
/*   Updated: 2025/10/16 22:44:23 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb < 0)
		return (0);
	while (index * index <= nb)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
