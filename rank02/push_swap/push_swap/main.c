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

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	parse_args(&a, ac, av);
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	index_stack(a);
	chunk_sort(&a, &b);
	free_stack(&a);
	return (0);
}
