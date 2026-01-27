#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

long	ft_atol(char *s)
{
	long	r;
	int	sign;

	r = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign = -1;
	if (!*s)
		error_exit();
	while (*s)
	{
		if (*s < '0' || *s > '9')
			error_exit();
		r = r * 10 + (*s - '0');
		if ((r * sign) > 2147483647 || (r * sign) < -2147483648)
			error_exit();
		s++;
	}
	return (r * sign);
}
