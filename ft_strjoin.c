#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		len;
	char	*res;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char	*)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (res);
	ft_memmove(res, (char	*)s1, ft_strlen(s1));
	ft_memmove(res + ft_strlen(s1), (char	*)s2, ft_strlen(s2));
	res[len] = '\0';
	return (res);
}