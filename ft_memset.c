/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:27:10 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:42:56 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c;

	ptr = (unsigned char	*)buf;
	c = ch;
	while (n--)
	{
		*ptr++ = ch;
	}
	return (buf);
}
