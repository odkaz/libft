#include "libft.h"

void	*ft_memset(void	*buf, int	ch, size_t	n)
{
	unsigned char	*ptr;
	unsigned char	c;

	ptr = (unsigned char	*)buf;
	c = ch;
	while (n--)
	{
		*ptr++ = ch;
	}
	return (buf);
}