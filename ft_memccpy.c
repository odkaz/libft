/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:26:27 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 22:15:22 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	i;

	i = 0;
	str1 = (unsigned char	*)dest;
	str2 = (unsigned char	*)src;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str2[i] == c)
		{
			return (&dest[i]);
		}
		i++;
	}
	return (NULL);
}
