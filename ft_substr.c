#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t len)
{
	char	*res;

	res = (char	*)malloc(sizeof(char) * len);
	if (res == NULL)
		return (res);
	ft_strlcpy(res, ft_strchr(s, start), len);
	return (res);
}