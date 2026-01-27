#include "push_swap.h"

int	push_swap(int ac, char **av);
{
	t_node	*a;
	t_node	*b;
	int	i;
	
	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	i = 1;
	while (i < ac)
		push_back(&a, new_node(ft_atol(av[i++])));
	index_stack(a);
	chunk_sort(&a, &b);
	return (0);
}
