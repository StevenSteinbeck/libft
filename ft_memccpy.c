/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:25:55 by stestein          #+#    #+#             */
/*   Updated: 2018/02/22 11:04:50 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int x, unsigned int n)
{
	unsigned int i;
	unsigned char *c1;
	unsigned char *c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n--)
	{
		*(c1++) = *c2;
		if (*c2 == (unsigned char)x)
			return (c1);
		c2++;
	}
	return (NULL);
}
