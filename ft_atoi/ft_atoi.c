int	ft_atoi(const char *str)
{
	int i;
	int m;
	int res;

	res = 0;
	m = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\f') ||  (str[i] == '\t')
			|| (str[i] == '\n') || (str[i] == '\r') || (str[i] == '\v'))
	{
			i++;
	}
	if((str[i] == '-') || (str[i] == '+'))
	{
		if(str[i] == '-')
			m = m + 1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	if (m > 0)
		res = -res;
	return (res);

}
