unsigned long	ft_strlcpy(char	*s1,char	*s2, unsigned long	size)
{
	unsigned long	i;
	unsigned long	j;
	
	i = 0;
	j = 0;
	while(s2[i] != '\0' && i < size - 1)
	{
		s1[i] = s2[i];
		i++;
	}
	while(s1[i + j] != '\0')
	{
		s1[i + j] = '\0';
		j++;
	}
	return (i + 1);
}