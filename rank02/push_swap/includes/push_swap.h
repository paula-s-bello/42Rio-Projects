#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_node
{
	int	value;
	int	index;
	struct	s_node *next;
	t_node;
}
/* parsing */
long	ft_atol(char *s);
void	error_exit(void);

/* stack */
t_node	*new_node(int v);
void	push_back(t_node **s, t_node *n);
int	stack_size(t_node *s);

/* operations */
void	sa(t_node **a);
void	pb(t_noede **a, t_node **b);
void	pa(t_node **b, t_node **a);
void	ra(t_node **a);
void	rb(t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);

/* index */
void	index_stack(t_node *a);

/* sort */
void	chunk_sort(t_node **a, t_node **b);

#endif
