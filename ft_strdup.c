#include "libft.h"

char	*ft_strdup(const char	*s)
{
	char	*res;
	int		len;

	len = 0;
	res = (char	*)malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	while(s[len] != '\0')
	{
		len++;
	}
	res[len] = '\0';
	while(--len >= 0)
	{
		res[len] = s[len];
	}
	return (res);
}