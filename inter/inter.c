#include <unistd.h>

int main(int ac, char **av)
{
	if(ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i;
	int j;
	int k;
	int h;

	h = 0;
	k = 0;
	i = 0;
	j = 0;

	while (av[1][i] != '\0')
	{
		while (av[2][j] != '\0')
		{
			if((av[1][i] == av[2][j]) && (av[1][i] != '\0') && (av[2][j] != '\0'))
			{
				while (av[1][k] != av[1][i])
					k++;
				while (av[2][h] != av[2][j])
					h++;
				if(k == i && h == j)
					write(1, &(av[2][j]), 1);
				k = 0;
				h = 0;
			}
			j++;
		}
		j = 0;
		i++;
	}
	write(1, "\n", 1);
}
