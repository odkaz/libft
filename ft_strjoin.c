/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:28:25 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:43:41 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
