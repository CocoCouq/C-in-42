#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	j = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while ((av[1][i] != '\0') && (av[2][j] != '\0'))
	{
		while (av[2][j] != '\0' && av[2][j] != av[1][i])
		{
			j = j + 1;
		}
		i = i + 1;
	}
	if (av[1][i - 1] == av[2][j])
	{
		while (av[1][k] != '\0')
		{
			write(1, &av[1][k], 1);
			k = k + 1;
		}
	}
	write(1, "\n", 1);
}
