#include "libft.h"

void	*ft_calloc(size_t n, size_t	size)
{
	void	*res;

	res = (void	*)malloc(size * n);
	if (res)
	{
		ft_memset(res, 0, size * n);
	}
	return (res);
}