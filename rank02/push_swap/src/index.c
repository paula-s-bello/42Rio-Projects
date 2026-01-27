#include "push_swap.h"

void	index_stack(t_node *a)
{
	t_node	*i;
	t_node	*j;
	int	idx;

	for (i = a; i; i = i->next)
	{
		idx = 0;
		for (j = a; j; j = j->next)
			if (j->value < i->value)
				idx++;
		i->index = idx;
	}
}
