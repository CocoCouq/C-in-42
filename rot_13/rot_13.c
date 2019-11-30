#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while(av[1][i])
	{
		if((av[1][i] > 64 && av[1][i] < 78) || (av[1][i] > 96 && av[1][i] < 110))
			av[1][i] = (av[1][i] + 13);
		else if((av[1][i] > 77 && av[1][i] < 91) || (av[1][i] > 109 && av[1][i] < 123))
			av[1][i] = (av[1][i] - 13);
		i++;
	}
	ft_putstr(av[1]);
	write(1, "\n", 1);
}
