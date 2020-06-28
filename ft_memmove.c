/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:27:03 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:42:48 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char	*)buf1;
	str2 = (char	*)buf2;
	i = 0;
	if (str1 < str2)
	{
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	else if (str1 > str2)
	{
		while (i < n)
		{
			str1[n - i - 1] = str2[n - i - 1];
			i++;
		}
	}
	return (buf1);
}
