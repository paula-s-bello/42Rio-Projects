/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:13:12 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 18:13:18 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

/* stack */
t_node	*new_node(int v);
void	push_back(t_node **s, t_node *n);
int		stack_size(t_node *s);

/* operations */
void	sa(t_node **a);
void	pb(t_node **a, t_node **b);
void	pa(t_node **b, t_node **a);
void	ra(t_node **a);
void	rb(t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);

/* sort */
void	index_stack(t_node *a);
void	chunk_sort(t_node **a, t_node **b);

/* parsing / utils */
int		ft_atol(const char *s, long *out);
int		is_sorted(t_node *a);
void	error_exit(void);
void	free_stack(t_node **stack);
int		has_duplicate(t_node *stack, int value);
void	add_args_to_stack(t_node **a, char **args);
char	**ft_split_spaces(char *s);
char	**fill_split(char **split, char *s);
void	free_split(char **split);
void	sort_small(t_node **a, t_node **b);

#endif
