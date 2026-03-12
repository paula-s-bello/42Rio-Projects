/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:09:58 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 18:10:05 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	index_stack(t_node *a)
{
	t_node	*i;
	t_node	*j;
	int		idx;

	i = a;
	while (i)
	{
		idx = 0;
		j = a;
		while (j)
		{
			if (j->value < i->value)
				idx++;
			j = j->next;
		}
		i->index = idx;
		i = i->next;
	}
}
