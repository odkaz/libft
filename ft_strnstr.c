/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:29:17 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:44:21 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	while (*big != '\0' && len > 0)
	{
		i = 0;
		while (big[i] == little[i])
		{
			if (little[i + 1] == '\0' && i < len)
			{
				return ((char	*)big);
			}
			i++;
		}
		big++;
		len--;
	}
	return (NULL);
}
