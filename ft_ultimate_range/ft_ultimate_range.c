#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i <= size - 1)
	{
		(*range)[i] = min + i;
		i = i + 1;
	}
	return (i);
}
