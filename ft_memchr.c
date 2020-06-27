#include "libft.h"

void	*ft_memchr(const void	*buf, int	ch, size_t	n)
{
	unsigned long	i;
	char			*s;

	i = 0;
	s = (char	*)buf;
	while (i < n)
	{
		if (s[i] == ch)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}