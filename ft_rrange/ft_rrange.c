#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int i;
	int size;
	int *tab;

	i = 0;
	size = ((end - start) + 2);
	tab = (int*)malloc(size * sizeof(int));
	if(tab == NULL)
		return(0);

	while (i < (size - 1))
	{
		tab[i] = end - i;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
