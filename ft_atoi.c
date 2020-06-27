int		ft_atoi(const char		*str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	if (*str == '+')
	{
		str++;
		sign = 1;
	}
	else if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * sign);
}