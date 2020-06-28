/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:29:34 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:49:18 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;

	res = (char	*)malloc(sizeof(char) * ft_strlen(set) + 1);
	if (res == NULL)
		return (res);
	i = 0;
	while (*s1 != '\0')
	{
		if (ft_strchr(set, *s1) == NULL)
		{
			res[i] = *s1;
			i++;
		}
		s1++;
	}
	return (res);
}
