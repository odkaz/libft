/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:28:44 by knoda             #+#    #+#             */
/*   Updated: 2020/06/29 03:56:42 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len > size)
		return (size);
	else if (len + 1 < size)
	{
		while (*src && len + 1 < size)
		{
			dst[len++] = *src++;
		}
		dst[len] = '\0';
	}
	return (len + (size_t)ft_strlen(src));
}
