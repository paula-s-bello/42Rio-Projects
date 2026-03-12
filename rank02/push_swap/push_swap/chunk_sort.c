/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:09:14 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 18:14:19 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	push_chunks(t_node **a, t_node **b, int chunk)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + chunk)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

static int	find_max_pos(t_node *b)
{
	t_node	*tmp;
	int		max;
	int		pos;
	int		i;

	tmp = b;
	max = b->index;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->index > max)
		{
			max = tmp->index;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

static void	push_back_to_a(t_node **a, t_node **b)
{
	int	pos;
	int	size;
	int	rot;

	while (*b)
	{
		pos = find_max_pos(*b);
		size = stack_size(*b);
		if (pos <= size / 2)
		{
			while (pos-- > 0)
				rb(b);
		}
		else
		{
			rot = size - pos;
			while (rot-- > 0)
				rrb(b);
		}
		pa(b, a);
	}
}

void	chunk_sort(t_node **a, t_node **b)
{
	int	size;
	int	chunk;

	size = stack_size(*a);
	if (size <= 100)
		chunk = 15;
	else
		chunk = 30;
	push_chunks(a, b, chunk);
	push_back_to_a(a, b);
}
