#include "push_swap.h"

void	chunk_sort(t_node **a, t_node **b)
{
	int	size;
	int	chunk;
	int	i;
	t_node	*tmp;
	int	max;
	int	pos;
	int	p;

	size = stack_size(*a);
	chunk = (size <= 100) ? 15 : 30;
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
	while (*b)
	{
		tmp = *b;
		max = tmp->index;
		pos = 0;
		p = 0;
		while (tmp)
		{
			if (tmp->index > max)
			{
				max = tmp->index;
				pos = p;
			}
			tmp = tmp->next;
			p++;
		}
		if (pos <= stack_size(*b) / 2)
			while ((*b)->index != max)
				rb(b);
		else
			while ((*b)->index != max)
				rrb(b);
		pa(b, a);
	}
}
