/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:27:58 by knoda             #+#    #+#             */
/*   Updated: 2020/07/05 19:41:41 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		index;
	int		i;

	res = (char	**)ft_calloc(((ft_strlen(s) / 2 + 1) + 1), sizeof(char	*));
	if (!res)
		return (NULL);
	index = 0;
	while (*s)
	{
		i = 0;
		while (!ft_memchr(s, c, i + 1) && s[i])
			i++;
		if (i > 0)
			res[index++] = ft_substr(s, 0, i);
		s += i;
		while (*s == c && *s)
			s++;
	}
	res[index] = NULL;
	return (res);
}
