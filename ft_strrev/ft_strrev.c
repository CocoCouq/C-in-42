int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int t;
	int j;
	int len;

	j = 0;
	i = 0;
	len = ft_strlen(str) - 1;
	while (j < (len + 1 / 2))
	{
		t = str[i];
		str[i] = str[len];
		str[len] = t;
		j++;
		len--;
		i++;
	}
	return(str);
}
