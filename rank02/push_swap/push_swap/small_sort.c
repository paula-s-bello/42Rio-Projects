/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:14:31 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 19:14:35 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	sort_two(t_node **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

static void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

static int	min_pos(t_node *a)
{
	int	min;
	int	pos;
	int	i;

	min = a->index;
	pos = 0;
	i = 0;
	while (a)
	{
		if (a->index < min)
		{
			min = a->index;
			pos = i;
		}
		a = a->next;
		i++;
	}
	return (pos);
}

static void	sort_five(t_node **a, t_node **b)
{
	int	pos;

	while (stack_size(*a) > 3)
	{
		pos = min_pos(*a);
		if (pos == 1)
			ra(a);
		else if (pos == 2)
		{
			ra(a);
			ra(a);
		}
		else if (pos == 3)
		{
			rra(a);
			rra(a);
		}
		else if (pos == 4)
			rra(a);
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(b, a);
}

void	sort_small(t_node **a, t_node **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size <= 5)
		sort_five(a, b);
}
