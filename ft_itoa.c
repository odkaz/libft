/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:26:18 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 17:02:29 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		div;
	long	ln;

	res = (char	*)ft_calloc(12, sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	ln = n;
	div = 1;
	if (ln < 0)
	{
		res[i++] = '-';
		ln *= -1;
	}
	while (ln / div > 10)
		div *= 10;
	while (div >= 1)
	{
		res[i++] = ln / div + '0';
		ln %= div;
		div /= 10;
	}
	return (res);
}
