/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:29:48 by knoda             #+#    #+#             */
/*   Updated: 2020/07/03 11:46:39 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	res = (char	*)malloc((len + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	if ((unsigned int)ft_strlen(s) < start)
	{
		return ((char	*)ft_calloc(sizeof(char), 1));
	}
	if (res)
	{
		ft_strlcpy(res, (char	*)(s + start), (len + 1));
	}
	return (res);
}
