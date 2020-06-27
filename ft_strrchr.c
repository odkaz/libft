#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			res = (char	*)s;
		}
		s++;
	}
	return (res);
}