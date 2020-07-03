/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:27:58 by knoda             #+#    #+#             */
/*   Updated: 2020/07/03 16:16:37 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		index;
	int		i;

	res = (char	**)malloc(sizeof(char	*) * ((ft_strlen(s) / 2 + 1) + 1));
	if (res == NULL)
		return (NULL);
	index = 0;
	while (*s != '\0' && res != NULL)
	{
		i = 0;
		while (ft_memchr(s, c, i + 1) == NULL && s[i] != '\0')
			i++;
		if (i > 0)
		{
			res[index] = ft_substr(s, 0, i);
			index++;
			s += i;
		}
		while (*s == c && *s != '\0')
			s++;
	}
	res[index] = NULL;
	return (res);
}
