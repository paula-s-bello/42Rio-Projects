/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-san <pdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:02:56 by pdos-san          #+#    #+#             */
/*   Updated: 2025/10/16 18:28:26 by pdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	ben;
	int	end;

	ben = 1;
	while (ben < argc)
	{
		end = 0;
		while (argv[ben][end] != '\0')
		{
			ft_putchar(argv[ben][end]);
			end++;
		}
		ft_putchar('\n');
		ben++;
	}
	return (0);
}
