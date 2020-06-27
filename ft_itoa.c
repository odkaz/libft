#include "libft.h"

char	*ft_itoa(int	n)
{
	char	*res;
	int		i;
	int		div;
	long	ln;

	res = (char	*)malloc(sizeof(char) * 12);
	i = 0;
	ln = n;
	div = 1;
	if (ln < 0)
	{
		res[i++] = '-';
		ln *= -1;
	}
	while (ln / div > 10)
		div *= 10;
	while (div >= 1)
	{
		res[i++] = ln / div + '0';
		ln %= div;
		div /= 10;
	}
	res[i] = '\0';
	return (res);
}