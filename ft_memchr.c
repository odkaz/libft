/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:26:39 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:42:26 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char	*)buf;
	while (i < n)
	{
		if (s[i] == ch)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
