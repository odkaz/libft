/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:28:16 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:50:02 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		len;

	len = 0;
	res = (char	*)malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	while (s[len] != '\0')
	{
		len++;
	}
	res[len] = '\0';
	while (--len >= 0)
	{
		res[len] = s[len];
	}
	return (res);
}
