/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:12:53 by pdos-san          #+#    #+#             */
/*   Updated: 2026/03/12 18:12:57 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

long	ft_atol(const char *s)
{
	long	r;
	int		sign;

	r = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	if (!*s)
		error_exit();
	while (*s)
	{
		if (*s < '0' || *s > '9')
			error_exit();
		r = (r * 10) + (*s - '0');
		if ((r * sign) > INT_MAX || (r * sign) < INT_MIN)
			error_exit();
		s++;
	}
	return (r * sign);
}

int	has_duplicate(t_node *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	add_args_to_stack(t_node **a, char **args)
{
	int		i;
	long	value;

	i = 0;
	while (args[i])
	{
		value = ft_atol(args[i]);
		if (has_duplicate(*a, (int)value))
		{
			free_stack(a);
			free_split(args);
			error_exit();
		}
		push_back(a, new_node((int)value));
		i++;
	}
}
