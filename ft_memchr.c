/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:00:35 by stestein          #+#    #+#             */
/*   Updated: 2018/03/12 12:14:30 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;
	const char *s1;

	s1 = (const char *)s;
	i = 0;
	while (i < n)
	{
		if(s1[i] == c)
			return ((void *)s1 + i);
		i++;
	}
	return(0);
}
	
