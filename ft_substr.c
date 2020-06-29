/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:29:48 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 18:00:06 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	res = (char	*)malloc(sizeof(char) * len);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_calloc(sizeof(char), 1));
	if (res != NULL)
		ft_strlcpy(res, (char	*)(s + start), len);
	return (res);
}
