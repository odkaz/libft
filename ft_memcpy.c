/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:26:56 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 20:39:45 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	if (buf1 == NULL || buf2 == NULL)
		return (NULL);
	i = 0;
	str1 = (char	*)buf1;
	str2 = (char	*)buf2;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (buf1);
}
