/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:27:58 by knoda             #+#    #+#             */
/*   Updated: 2020/07/05 21:33:31 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_mal(char const *s, char c)
{
	int	cnt;
	int	flag;

	cnt = 1;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		flag = 0;
		while (*s != c && *s)
		{
			flag = 1;
			s++;
		}
		if (flag)
			cnt++;
	}
	return (cnt);
}

static void	*free_all(char **res, int index)
{
	while (index--)
		free(res[index]);
	free(res);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		index;
	int		i;

	res = (char	**)ft_calloc(cnt_mal(s, c), sizeof(char	*));
	if (!res)
		return (NULL);
	index = 0;
	while (*s)
	{
		i = 0;
		while (!ft_memchr(s, c, i + 1) && s[i])
			i++;
		if (i > 0)
		{
			res[index] = ft_substr(s, 0, i);
			if (res[index++] == NULL)
				free_all(res, --index);
			s += i;
		}
		while (*s == c && *s)
			s++;
	}
	res[index] = NULL;
	return (res);
}
