unsigned long	ft_strlcat(char	*s1, const char	*s2, unsigned long size)
{
	unsigned long		i;
	unsigned long		cnt;
	
	i = 0;
	cnt = 0;
	while(s1[i] != '\0')
	{
		i++;
	}
	while(s2[cnt] != '\0')
	{
		if((i + cnt) < (size - 1))
		{
			s1[i + cnt] = s2[cnt];
		}
		else if ((i + cnt) == (size - 1))
		{
			s1[i + cnt] = '\0';
		}
		cnt++;
	}
	return (i + cnt);
}