#include <stdlib.h>

int		ft_strlen_ttc(int size, char **str, char *str1)
{
	int i;
	int j;
	int ttc;

	ttc = 0;
	i = 0;
	j = 0;
	while (i != size)
	{
		while (str[i][j] != '\0')
		{
			j = j + 1;
		}
		ttc = ttc + j;
		i = i + 1;
		j = 0;
	}
	while (str1[i] != '\0')
	{
		i = i + 1;
	}
	i = i * (size - 1);
	ttc = ttc + i;
	return (ttc + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*strf;

	i = -1;
	j = -1;
	k = -1;
	strf = (char*)malloc(ft_strlen_ttc(size, strs, sep) * sizeof(char));
	if (strf == NULL)
		return (0);
	while (++i != size)
	{
		while (strs[i][++j] != '\0')
			strf[++k] = strs[i][j];
		j = -1;
		if (i < size - 1)
		{
			while (sep[++j] != '\0')
				strf[++k] = sep[j];
			j = -1;
		}
	}
	strf[k + 1] = '\0';
	return (strf);
}
