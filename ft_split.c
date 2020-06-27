#include "libft.h"

char	**ft_split(char const	*s, char	c)
{
	char	**res;
	int		split;
	int		i;

	res = (char	**)malloc(sizeof(char	*) * (ft_strlen(s) + 1));
	split = 0;
	while (*s != '\0')
	{
		i = 0;
		while (ft_memchr(s, c, i + 1) == NULL && s[i] != '\0')
			i++;
		if (i > 0)
		{
			res[split] = ft_substr(s, *s, i + 1);
			split++;
			s += i;
		}
		while (*s == c && *s != '\0')
			s++;
	}
	res[split] = NULL;
	return	(res);
}