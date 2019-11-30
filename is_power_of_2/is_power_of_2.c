int	is_power_of_2(unsigned int n)
{
	unsigned int nb;

	nb = 2;
	if (n == 1)
		return (1);
	while(nb < n)
		nb = nb * 2;

	if(nb == n)
		return (1);
	else
		return (0);
}
