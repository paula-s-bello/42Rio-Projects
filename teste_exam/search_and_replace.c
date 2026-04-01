#include <unistd.h>

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		if (strlen(argv[2]) == 1 && strlen(argv[3]) == 1)
