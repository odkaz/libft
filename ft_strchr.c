#include "libft.h"

char	*ft_strchr(const char *s, int	c)
{
	int		i;
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char	*)s);
		}
		s++;
	}
	return (NULL);
}