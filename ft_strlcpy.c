/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazumanoda <kazumanoda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 23:28:53 by knoda             #+#    #+#             */
/*   Updated: 2020/06/28 16:47:59 by kazumanoda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *s1, char *s2, unsigned long size)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (s2[i] != '\0' && i < size - 1)
	{
		s1[i] = s2[i];
		i++;
	}
	while (s1[i + j] != '\0')
	{
		s1[i + j] = '\0';
		j++;
	}
	return (i + 1);
}
