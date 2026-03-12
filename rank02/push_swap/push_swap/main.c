/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:12:07 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 18:19:10 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	parse_args(t_node **a, int ac, char **av)
{
	int		i;
	char	**split;

	i = 1;
	while (i < ac)
	{
		split = ft_split_spaces(av[i]);
		if (!split || !split[0])
		{
			free_split(split);
			free_stack(a);
			error_exit();
		}
		add_args_to_stack(a, split);
		free_split(split);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	parse_args(argc, argv, &a);
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	index_stack(a);
	size = stack_size(a);
	if (size <= 5)
	{
		sort_small(&a, &b);
		free_stack(&a);
		return (0);
	}
	chunk_sort(&a, &b);
	free_stack(&a);
	return (0);
}
