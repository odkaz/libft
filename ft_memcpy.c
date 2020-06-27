#include "libft.h"

void	*ft_memcpy(void	*buf1, const void	*buf2, size_t n)
{
	char		*str1;
	char		*str2;
	unsigned long	i;

	i = 0;
	str1 = (char	*)buf1;
	str2 = (char	*)buf2;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (buf1);
}