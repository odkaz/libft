#include "libft.h"

void	*ft_memccpy(void	*dest, const void	*src, int c, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned long	i;

	i = 0;
	str1 = (char	*)dest;
	str2 = (char	*)src;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str2[i] == c)
		{
			return (&dest[i]);
		}
		i++;
	}
	return (NULL);
}