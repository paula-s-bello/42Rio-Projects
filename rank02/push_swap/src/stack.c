#include "push_swap.h"

t_node	*new_node(int v)
{
	t_node	*n;

	n = malloc(sizeof(t_node));
	if (!n)
		exit(1);
	n->value = v;
	n->index = -1;
	n->next = NULL;
	return (n);
}

void	push_back(t_node **s, t_node *n)
{
	t_node	*tmp;

	if (!*s)
	{
		*s = n;
		return ;
	}
	tmp = *s;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
}

int	stack_size(t_node *s)
{
	int	i;

	i = 0;
	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}
