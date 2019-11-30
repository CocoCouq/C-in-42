#include <stdlib.h>

int	compute_size(int nb)
{
	unsigned int	n;
	int				size;

	n = nb;
	size = 1;
	if (nb < 0)
	{
		n = -nb;
		size++;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char			*dest;
	unsigned int	index;
	unsigned int	n;

	index = compute_size(nbr);
	dest = (char*)malloc(sizeof(*dest) * index + 1);
	dest[index--] = '\0';
	if (nbr == 0)
	{
		dest[0] = '0';
		n = 0;
	}
	else if (nbr < 0)
	{
		dest[0] = '-';
		n = -nbr;
	}
	else
		n = nbr;
	while (n > 0)
	{
		dest[index--] = n % 10 + '0';
		n = n / 10;
	}
	return (dest);
}
