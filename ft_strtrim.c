/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:29:34 by knoda             #+#    #+#             */
/*   Updated: 2020/07/04 03:47:12 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*end;
	int		i;

	i = 0;
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	if (*s1)
		end = (char	*)(s1 + ft_strlen(s1) - 1);
	else
		end = (char	*)s1;
	while (end > s1 && ft_strchr(set, *end) != NULL)
		end--;
	res = (char	*)malloc(sizeof(char) * (end - s1 + 1 + 1));
	if (res == NULL)
		return (res);
	ft_strlcpy(res, s1, end - s1 + 1 + 1);
	return (res);
}
